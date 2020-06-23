 long d,s;
 int t=10,e=9;
 void setup() {
pinMode(3,OUTPUT);
pinMode(e,INPUT);
pinMode(t,OUTPUT);
digitalWrite(3,LOW);
Serial.begin(9600);
}

void loop() {
  digitalWrite(t,LOW);
  delayMicroseconds(2);

  digitalWrite(t,HIGH);
  delayMicroseconds(1000);
  digitalWrite(t,LOW);

  d= pulseIn(e, HIGH);
  s=d*0.034/2;
  if(s>=8)
  digitalWrite(3,HIGH);
  else
  digitalWrite(3,LOW);
  Serial.println("Distance:");
  Serial.println(s);
  delay(500);
  

}
