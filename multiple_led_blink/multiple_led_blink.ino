int led_red = 13;
int led_green = 12; 
int led_yellow = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_red, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(led_red, LOW);
  delay(1000); 

  digitalWrite(led_green, HIGH);
  delay(1000); 
  digitalWrite(led_green, LOW);
  delay(1000); 

  digitalWrite(led_yellow, HIGH);
  delay(1000); 
  digitalWrite(led_yellow, LOW);   // turn the LED off by making the voltage LOW
  delay(1000); 
}