#include <DHT_U.h>
#include "DHT.h"

DHT dht(A0,DHT11);

void setup() 
{
  pinMode(A0,INPUT);
  pinMode(5,OUTPUT);
  
  Serial.begin(9600);
  dht.begin();
}

void loop() 
{
  int c=dht.readTemperature();
  int f=dht.readTemperature(true);
  int h=dht.readHumidity();

  if(h>60)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }

  Serial.print("CELCIUS:");
  Serial.println(c);
  Serial.print("FAHRENHEIT:");
  Serial.println(f);
  Serial.print("HUMIDITY:");
  Serial.println(h);
  delay(1500);
}
