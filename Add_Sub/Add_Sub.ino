int d;
void setup() {
  Serial.begin(9600);

}
void loop() {
  d=5-2;
  Serial.println(d);
  d=d+3;
  Serial.println(d);
}
