#include "SoilSensorESP32.h"

SoilSensor soilSensor(Serial2, 5, 18, 4800);
SoilData soil;

void setup() {
  Serial.begin(115200);
  soilSensor.begin();
}

void loop() {
  if (soilSensor.getData(soil)) {
    Serial.println("Soil Moisture: " + String(soil.soilMoisture) + " %");
    Serial.println("Temperature: " + String(soil.temperature) + " °C");
    Serial.println("Conductivity: " + String(soil.conductivity) + " µS/cm");
    Serial.println("pH: " + String(soil.soilPH));
    Serial.println("Nitrogen: " + String(soil.nitrogen) + " mg/kg");
    Serial.println("Phosphorus: " + String(soil.phosphorus) + " mg/kg");
    Serial.println("Potassium: " + String(soil.potassium) + " mg/kg");
  } else {
    Serial.println("Read failed");
  }
  delay(3000);
}
