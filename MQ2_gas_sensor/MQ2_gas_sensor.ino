#include <UbidotsMicroESP8266.h>
#define TOKEN "A1E-Te2b3cnIbDMMGCjzkDYDcUb9ddUtnP"
#define GAS "5d4fbb52c03f977792d20dbb"
#define WIFISSID "sivant"
#define PASSWORD "9994532266"
Ubidots client(TOKEN);
void setup() {
Serial.begin(115200);
client.wifiConnection(WIFISSID,PASSWORD);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
int x=analogRead(A0);
Serial.println(x);
client.add(GAS,x);
client.sendAll(false);
delay(2000);

}
