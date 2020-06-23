void setup() {
pinMode(A0,INPUT);
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
Serial.begin(9600);
}

void loop() {
int x=analogRead(A0);
Serial.println(x);
if(x<=700)
{
digitalWrite(4,HIGH);
delay(500);
}
else
{
digitalWrite(4,LOW);
delay(500);
}
}
