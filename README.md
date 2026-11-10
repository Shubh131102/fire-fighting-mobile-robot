# Firefighting Mobile Robot

A robot that finds a fire and launches an extinguisher ball at it. Designed and built during my mechatronics internship at Pandit Deendayal Energy University.

<p align="center">
  <img src="media/WhatsApp%20Image%202025-10-01%20at%2015.03.05_ce875dd7.jpg" alt="Firefighting robot with wooden chassis and launcher tube" width="420">
</p>

## Results

| | |
|---|---|
| Launch range | **30 m** at a 45° launch angle |
| Fire detection in simulation | 90% with IR, ultrasonic, and temperature sensor fusion |
| Flame detection on hardware | Reliable within about 50 cm |

## Design

| Part | Implementation |
|---|---|
| Chassis | 4-wheel differential drive, wooden frame designed in SolidWorks |
| Launcher | Spring launcher mounted at 45°, servo-triggered |
| Sensing | Flame, IR, ultrasonic, and temperature sensors |
| Control | Arduino UNO for motors, servo, and sensor logic |
| Remote override | WiFi module |
| Power | Two 18650 cells with an onboard regulator |
| Simulation | Webots, used to tune sensor fusion before the hardware build |

I also diagnosed DC motor thermal failures on the drive and added a cooling fix that dropped operating temperature by 20°C.

## What's in this repo

| Path | Contents |
|---|---|
| `firmware/fire_fighter.ino` | Arduino sketch: flame threshold detection, drive motors, and launcher servo trigger |
| `media/` | Photo of the built robot |

## Flash the firmware

Open `firmware/fire_fighter.ino` in the Arduino IDE, select Arduino UNO, and upload. Adjust `threshold` to match your flame sensor.

## License

MIT
