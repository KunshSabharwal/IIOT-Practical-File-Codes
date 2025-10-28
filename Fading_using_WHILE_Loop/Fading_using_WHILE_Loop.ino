const int ledPin = 11;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  do {
    analogWrite(ledPin, brightness);
    brightness += fadeAmount;
    delay(50);
  } while (brightness <= 255);

  do {
    analogWrite(ledPin, brightness);
    brightness -= fadeAmount;
    delay(50);
  } while (brightness >= 0);
}
