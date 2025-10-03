#include <Servo.h>

// Pins
const int motorLeft = 5;
const int motorRight = 6;
const int flameSensor = A0;
const int servoPin = 9;

Servo launcher;

int threshold = 500;

void setup() {
  pinMode(motorLeft, OUTPUT);
  pinMode(motorRight, OUTPUT);
  pinMode(flameSensor, INPUT);

  launcher.attach(servoPin);
  launcher.write(0); // reset

  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(flameSensor);
  Serial.println(sensorVal);

  if (sensorVal > threshold) {
    stopMotors();
    Serial.println("🔥 Fire detected → Launching extinguisher!");
    launcher.write(90);
    delay(1000);
    launcher.write(0);
    delay(2000);
  } else {
    driveForward();
  }
}

void driveForward() {
  analogWrite(motorLeft, 200);
  analogWrite(motorRight, 200);
}

void stopMotors() {
  analogWrite(motorLeft, 0);
  analogWrite(motorRight, 0);
}
