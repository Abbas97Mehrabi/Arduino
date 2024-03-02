const int tmpPin = A0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  float tmp_reading = analogRead(tmpPin);
  float voltage = tmp_reading * 5.0 / 1023;
  float celsius = voltage * 100.0 - 50;
  float fahrenheit = (celsius * 9)/5 + 32;
  
  Serial.print(tmp_reading);Serial.print(";");
  Serial.print(voltage);Serial.print("; ");

  Serial.print(celsius);
  Serial.print(" degrees Celsius ,");
  Serial.print(fahrenheit);
  Serial.println(" degrees Fahrenheit");
  delay(1000);
}
