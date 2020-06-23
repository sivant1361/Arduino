void setup() {
pinMode(A0,INPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
digitalWrite(4,LOW);
}

void loop() {
int x=analogRead(A0);
Serial.println(x);
if(x<=800)
digitalWrite(4,HIGH);
else
digitalWrite(4,LOW);
}
