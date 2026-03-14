# Firefighting Mobile Robot — PDEU Project

Arduino-powered firefighting robot with autonomous flame detection and 
spring-launched fire extinguisher deployment. Built as mechatronics 
internship project at Pandit Deendayal Energy University.

---

## Key Results

- **90%** fire detection accuracy via multi-sensor fusion (IR/ultrasonic/temperature)
- **30-meter** projectile range at **45°** launch angle
- Reliable flame detection within ~50cm
- Successful fire extinguisher ball deployment in lab testing
- Webots simulation validated before physical hardware build

---

## System Overview

| Component | Implementation |
|-----------|---------------|
| Chassis | 4-wheel differential drive, wooden frame (SolidWorks designed) |
| Fire Detection | IR + ultrasonic + temperature sensor fusion |
| Actuation | Spring launcher at 45°, servo-triggered |
| Control | Arduino UNO — motor + servo + sensor logic |
| Communication | WiFi module for remote override |
| Power | Dual 18650 battery pack with onboard regulator |
| Simulation | Webots — multi-sensor fusion, 90% detection accuracy |

---

## Repo Layout
```
firefighting_robot/
├── firmware/         # Arduino C++ code — motor, servo, sensor logic
├── simulation/       # Webots simulation files
├── cad/              # SolidWorks chassis and launcher designs
├── docs/             # Project report and wiring schematics
└── media/            # Prototype photos and demo GIFs
```

---

## Quick Start
```bash
# Hardware
# 1. Open firmware/fire_fighter.ino in Arduino IDE
# 2. Connect flame sensor + servo + motor driver
# 3. Upload code
# 4. Place flame source — robot detects and fires

# Simulation
# Open simulation/ in Webots
# Run world file to test multi-sensor detection
```

---

## Mechanical Design

- Chassis and DC motor mounts designed in SolidWorks
- Spring launcher mechanism at fixed 45° achieving 30-meter range
- Battery holder and wiring harness integrated into chassis
- Cable routing designed for clean assembly and serviceability

---

## Software & Control

- Arduino firmware in C++ with flame sensor threshold logic
- Motor control for directional navigation toward fire source
- WiFi module integration for remote manual override
- Webots simulation with IR/ultrasonic/temperature sensor fusion

---

## Wiring Overview

| Component | Arduino Pin |
|-----------|-------------|
| Flame Sensor | A0 |
| Motor Driver IN1/IN2 | D4/D5 |
| Motor Driver IN3/IN4 | D6/D7 |
| Servo (Launcher) | D9 |
| WiFi Module TX/RX | D2/D3 |

---

## Notes

- Large CAD and MP4 files available via GitHub Releases
- Test launcher mechanism with robot suspended before floor operation
- Flame sensor sensitivity adjustable via potentiometer on module
- Webots simulation recommended for control logic testing before hardware
