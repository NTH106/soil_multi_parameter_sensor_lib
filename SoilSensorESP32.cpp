#include "SoilSensorESP32.h"
#include <ModbusMaster.h>

ModbusMaster node;

SoilSensor::SoilSensor(HardwareSerial &serial, uint8_t rxPin, uint8_t txPin, uint32_t baud)
  : _serial(serial), _rxPin(rxPin), _txPin(txPin), _baud(baud) {}

void SoilSensor::begin() {
  _serial.begin(_baud, SERIAL_8N1, _rxPin, _txPin);
  node.begin(1, _serial); // slave ID = 1
}

bool SoilSensor::getData(SoilData &data) {
  uint8_t result = node.readHoldingRegisters(0x0000, 14);  // đọc 14 thanh ghi (7 cặp thanh ghi 16bit)
  if (result == node.ku8MBSuccess) {
    data.soilMoisture = node.getResponseBuffer(0) / 10.0;
    data.temperature  = node.getResponseBuffer(1) / 10.0;
    data.conductivity = node.getResponseBuffer(2);
    data.soilPH       = node.getResponseBuffer(3) / 10.0;
    data.nitrogen     = node.getResponseBuffer(4);
    data.phosphorus   = node.getResponseBuffer(5);
    data.potassium    = node.getResponseBuffer(6);
    return true;
  }
  return false;
}
