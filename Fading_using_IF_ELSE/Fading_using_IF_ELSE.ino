int ledPin = 11;
int brightness = 0;
int fadeAmount = 5;
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  analogWrite(ledPin, brightness);
  if(brightness <= 0){
    fadeAmount = 5;
  } else if (brightness >= 255){
    fadeAmount = -5;
  }
  brightness += fadeAmount;
  delay(30);
}
