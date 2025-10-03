# Fire-Fighting Mobile Robot — PDPU Project

**TL;DR:** Arduino-powered 4-wheel robot with flame detection and automated fire extinguishing mechanism.  
Developed as my mechatronics internship/final-year project at PDPU.

## Highlights
- **Chassis:** 4-wheel differential-drive car base
- **Sensors:** Flame sensor for fire detection
- **Actuation:** Servo-controlled spring launcher for extinguishing capsule
- **Control:** Arduino UNO for motor + servo actuation
- **Power:** Dual 18650 battery pack with onboard regulator
- **Demo:** Successfully detected flame source and launched extinguishing payload

## Repo Layout
- `firmware/` — Arduino code for motor + launcher
- `docs/` — project report, schematics
- `media/` — prototype photos and demo GIFs
- `cad/` — chassis drawings

## Quick Start
1. Open `firmware/fire_fighter.ino` in Arduino IDE  
2. Connect flame sensor + servo + motor driver  
3. Upload code → place flame source → robot detects & fires!

## Results
- Reliable flame detection within ~50 cm
- Triggered launcher to extinguish fire target
- Demonstrated safety concept in lab

## Notes
Large CAD and MP4 files can be uploaded via GitHub Releases.  
