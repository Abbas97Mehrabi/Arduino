#include <Arduino.h>

int trigger_pin = 8;
int echo_pin = 9;

int green_led = 13;
int red_led = 12;
int distance;
long duration;
void setup() {
  Serial.begin(9600);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(green_led, OUTPUT);
  pinMode(red_led, OUTPUT);
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

  if (distance < 15)
  {
    digitalWrite(red_led, HIGH);
    digitalWrite(green_led, LOW);
    Serial.println("Danger");
  }else{
    digitalWrite(green_led, HIGH);
    digitalWrite(red_led, LOW);
    Serial.println("Safe");
  }
  
}

