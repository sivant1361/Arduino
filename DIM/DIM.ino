void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
digitalWrite(10,LOW);
Serial.begin(9600);
}

void loop() {
  int x=analogRead(A0);
  Serial.println(x);
  analogWrite(10,x);
  delay(30);
}
