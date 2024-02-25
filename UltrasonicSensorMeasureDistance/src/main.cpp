#include <Arduino.h>

int trigger_pin = 8;
int echo_pin = 9;

int distance;
long duration;
void setup() {
  Serial.begin(9600);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}

void loop() {
  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);

  duration = pulseIn(echo_pin,HIGH);
  distance = (duration/2) / 29.1;

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.print(" CM \n");
}

