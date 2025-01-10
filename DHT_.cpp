#include "DHT.h"
#define DHTTYPE DHT22 

const int DHTPin = 5;

DHT dht(DHTPin, DHTTYPE);

void setup()
{
   Serial.begin(9600);
   Serial.println("DHTxx test!");
   delay( 100 );
   dht.begin();
}

void loop() 
{
   delay(250);
   float h = dht.readHumidity();
   float t = dht.readTemperature();
   
   if (isnan(h) || isnan(t)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
   }
   Serial.print("Humidity: ");
   Serial.print(h);
   Serial.print(" %\t");
   Serial.print("Temperature: ");
   Serial.print(t);
   Serial.println(" *C ");
}