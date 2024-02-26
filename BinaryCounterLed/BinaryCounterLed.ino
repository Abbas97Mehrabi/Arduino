int leds[6] = {8, 9, 10, 11, 12, 13};
char input;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i<6;i++){
    pinMode(leds[i], OUTPUT);
  }
  
}

void loop() {
  for(int i = 0; i < 64; i++){
  /*
  if((i%2)>0){digitalWrite(leds[0], HIGH);}else{digitalWrite(leds[0], LOW);}
  if((i%4)>1){digitalWrite(leds[1], HIGH);}else{digitalWrite(leds[1], LOW);}
  if((i%8)>3){digitalWrite(leds[2], HIGH);}else{digitalWrite(leds[2], LOW);}
  if((i%16)>7){digitalWrite(leds[3], HIGH);}else{digitalWrite(leds[3], LOW);}
  if((i%32)>15){digitalWrite(leds[4], HIGH);}else{digitalWrite(leds[4], LOW);}
  if((i%64)>31){digitalWrite(leds[5], HIGH);}else{digitalWrite(leds[5], LOW);}*/

  delay(300);
  digitalWrite(leds[0], i%2>0);
  digitalWrite(leds[1], i%4>1);
  digitalWrite(leds[2], i%8>3);
  digitalWrite(leds[3], i%16>7);
  digitalWrite(leds[4], i%32>15);
  digitalWrite(leds[5], i%64>31);
  }
  
}