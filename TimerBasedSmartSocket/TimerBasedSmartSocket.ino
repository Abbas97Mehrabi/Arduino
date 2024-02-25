int led = 12;
char input;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  Serial.print("Press Y to 1 Hour Timer \nPress N to 30 mins Timer");
}

void loop() {
  // put your main code here, to run repeatedly:
  input = Serial.read();
  if(input == 'Y'){
    digitalWrite(led, HIGH);
    delay(3600000);
    digitalWrite(led, LOW);
  }
  if(input == 'N'){
    digitalWrite(led, HIGH);
    delay(1800000);
    digitalWrite(led, LOW);
  }
  
}