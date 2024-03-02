const int ldrPin = A0;
const int ledPin = 13;
const int darknessTreshold = 150;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  Serial.println(analogRead(ldrPin));
  delay(100);
  if(analogRead(ldrPin) < darknessTreshold){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
}