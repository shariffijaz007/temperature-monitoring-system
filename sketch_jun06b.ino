#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Test Started");
  delay(2000);
}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}
