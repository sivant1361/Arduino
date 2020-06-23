void setup() {
pinMode(A0,INPUT);
pinMode(2,OUTPUT);
digitalWrite(2,LOW);
Serial.begin(9600);
}

void loop() {
int x=analogRead(A0);
Serial.println(x);
if(x<=700)
{
digitalWrite(2,HIGH);
delay(500);
}
else
{
digitalWrite(2,LOW);
delay(500);
}
}
