#include "Makeblock.h"
#include <SoftwareSerial.h>
#include <Wire.h>

int led = 13;

uint8_t motorSpeed = 100;

MeDCMotor motor1(M1);
MeDCMotor motor2(M2);

void setup()
{
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    digitalWrite(led, HIGH);
    motor1.run(motorSpeed);
    motor2.run(-motorSpeed);
    delay(2000);
    motor1.stop();
    motor2.stop();
    delay(100);
    motor1.run(-motorSpeed);
    motor2.run(motorSpeed);
    digitalWrite(led, LOW);
    delay(2000);
    motor1.stop();
    motor2.stop();
    delay(2000);
}
