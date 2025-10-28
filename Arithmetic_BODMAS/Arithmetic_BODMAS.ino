int c;
void setup() {
  Serial.begin(9600);
}
void loop() {
  c=2*3/(2+1)+4;
  Serial.println(c);  
}
