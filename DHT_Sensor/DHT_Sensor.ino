#include "DHT.h"
#define  DHTPIN 2
#define DHTTYPE DHT11
//DHT dht(2,DHT11)
DHT dht(DHTPIN,DHTTYPE);
void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 Test!");
  dht.begin();
}
void loop() {
  delay(2000);
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  if (isnan(humidity) || isnan(temperature))
  //isnan = is NOT A NUMBER which returns true when it is not a number
  {
    Serial.println("Failed to read from DHT Sensor!");
    return;
  }
  else
  {
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("%, Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");
  }
}
