#ifndef SOIL_SENSOR_ESP32_H
#define SOIL_SENSOR_ESP32_H

#include <Arduino.h>

struct SoilData {
  float soilMoisture;  // %
  float temperature;   // °C
  uint16_t conductivity; // µS/cm
  float soilPH;
  uint16_t nitrogen;     // mg/kg
  uint16_t phosphorus;
  uint16_t potassium;
};

class SoilSensor {
public:
  SoilSensor(HardwareSerial &serial, uint8_t rxPin, uint8_t txPin, uint32_t baud = 4800);
  void begin();
  bool getData(SoilData &data);

private:
  HardwareSerial &_serial;
  uint8_t _rxPin, _txPin;
  uint32_t _baud;
  uint8_t _buffer[32];
  bool readSensor();
};

#endif
