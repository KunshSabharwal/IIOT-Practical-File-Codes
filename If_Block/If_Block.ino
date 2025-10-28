int b;
int c;
void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  b=3;
  c=5;
  if(b<4)
    Serial.println(b);
  if(c<4)
    Serial.println(c);
}
