void setup() {
pinMode(D2,OUTPUT);
digitalWrite(D2,LOW);
}

void loop() {
  digitalWrite(D2,HIGH);
  delay(500);
  digitalWrite(D2,LOW);
  delay(500);

}
