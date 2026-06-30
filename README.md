🌡️temperature-monitoring-system

A real-time temperature and humidity monitoring system built with **Arduino Uno**, a **DHT11 sensor**, and a **16x2 I2C LCD display**. The system continuously reads ambient temperature and humidity and displays live readings on the LCD, with optional serial logging for debugging and data analysis.

## 📋 Overview

This project demonstrates a simple yet practical embedded systems application — capturing environmental data and presenting it on a low-cost character display, without requiring a computer or internet connection. It's an ideal starter project for learning sensor interfacing, I2C communication, and real-time display updates on Arduino.

## ✨ Features

- Real-time temperature (°C/°F) and humidity readings
- Live display on a 16x2 LCD via I2C (only 2 wires needed: SDA/SCL)
- Serial Monitor output for debugging and data logging
- Error handling for sensor read failures
- Lightweight, beginner-friendly code (~60 lines)
- Easily extendable with alerts, data logging, or wireless connectivity

## 🔧 Hardware Required

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| DHT11 Temperature & Humidity Sensor | 1 |
| 16x2 LCD with I2C Module (PCF8574) | 1 |
| Jumper Wires | ~10 |
| Breadboard | 1 |

## 🔌 Circuit Connections

**I2C LCD → Arduino Uno**
- VCC → 5V
- GND → GND
- SDA → A4
- SCL → A5

**DHT11 → Arduino Uno**
- VCC → 5V
- GND → GND
- DATA → Digital Pin 7

## 📚 Libraries Used

- [LiquidCrystal_I2C](https://github.com/johnrickman/LiquidCrystal_I2C) by Frank de Brabander
- [DHT sensor library](https://github.com/adafruit/DHT-sensor-library) by Adafruit
- Adafruit Unified Sensor (dependency)

Install via **Arduino IDE → Sketch → Include Library → Manage Libraries**.

## 🚀 Getting Started

1. Wire the components as shown above.
2. Install the required libraries.
3. Open `temperature_monitor.ino` in Arduino IDE.
4. Select **Board: Arduino Uno** and the correct **COM port**.
5. Upload the sketch.
6. View live readings on the LCD and/or Serial Monitor (9600 baud).

## 🐛 Troubleshooting

| Issue | Fix |
|---|---|
| LCD blank | Try I2C address `0x3F` instead of `0x27`, run an I2C scanner |
| "Sensor Error!" on LCD | Check DHT11 wiring, add a 10kΩ pull-up resistor on DATA |
| Garbled characters | Loose SDA/SCL connections or wrong I2C address |

## 🔮 Future Enhancements

- [ ] Buzzer alert for high/low temperature thresholds
- [ ] SD card data logging
- [ ] WiFi connectivity (ESP8266/ESP32) for remote monitoring
- [ ] Support for multiple sensors / multi-room monitoring
- [ ] Web dashboard for historical data visualization
