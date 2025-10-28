#define trigPin 11
#define echoPin 12
#define ledPin 13
void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin,OUTPUT);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2) / 29.1;
  if(distance<10)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  Serial.print("distance ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
