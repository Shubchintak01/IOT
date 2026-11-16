#include <DHT.h>

#define DHTPIN 2 // DHT11 DATA pin connected to D2
#define DHTTYPE DHT11 // Select DHT11 sensor
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Temperature and Humidity Monitor");
}
void loop() {
  delay(2000); // Wait 2 seconds between readings
  float temperature = dht.readTemperature(); // Celsius
  float humidity = dht.readHumidity(); // Percentage
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Error: Failed to read DHT11 sensor!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  Serial.println("--------------------------");
}