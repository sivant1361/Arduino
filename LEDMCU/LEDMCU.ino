#include <UbidotsMicroESP8266.h>
#define TOKEN "A1E-Te2b3cnIbDMMGCjzkDYDcUb9ddUtnP"
#define led "5d4fe812c03f971d977c4a80"
#define WIFISSID "sivant"
#define PASSWORD "9994532266"
Ubidots client(TOKEN);
void setup() {
Serial.begin(115200);
client.wifiConnection(WIFISSID,PASSWORD);
pinMode(D0,OUTPUT);
digitalWrite(D0,LOW);

}

void loop() {
int x=client.getValue(led);
if(x==1)
digitalWrite(D0,HIGH);
else
digitalWrite(D0,LOW);
delay(10);

}
