int i,j;

void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
digitalWrite(1,LOW);
pinMode(2,OUTPUT);
digitalWrite(2,LOW);
pinMode(3,OUTPUT);
digitalWrite(3,LOW);
pinMode(4,OUTPUT);
digitalWrite(4,LOW);
pinMode(5,OUTPUT);
digitalWrite(5,LOW);

}

void loop() {
for(i=1;i<=5;i+=2)
{
digitalWrite(i,HIGH);
delay(50);
digitalWrite(i,LOW);
}
for(j=2;j<=5;j=j+2)
{
digitalWrite(j,HIGH);
delay(500);
digitalWrite(j,LOW);
}
}
