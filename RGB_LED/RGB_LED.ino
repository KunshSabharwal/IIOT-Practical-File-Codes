#define LED1RED 5
#define LED1BLUE 3
#define LED1GREEN 4
void setup() {
  pinMode(LED1RED, OUTPUT);
  pinMode(LED1BLUE, OUTPUT);
  pinMode(LED1GREEN, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(LED1RED, HIGH);
  Serial.println("LED1RED");
  delay(1000);
  digitalWrite(LED1RED, LOW);
  Serial.println("LED1RED");
  delay(1000);

  digitalWrite(LED1BLUE, HIGH);
  Serial.println("LED1BLUE");
  delay(1000);
  digitalWrite(LED1BLUE, LOW);
  Serial.println("LED1BLUE");
  delay(1000);

  digitalWrite(LED1GREEN, HIGH);
  Serial.println("LED1GREEN");
  delay(1000);
  digitalWrite(LED1GREEN, LOW);
  Serial.println("LED1GREEN");
  delay(1000);
}
