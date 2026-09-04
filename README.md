# Sewage-blockage-monitorning-system-
ESP32-based IoT system for real-time sewage blockage and harmful gas monitoring with GPS and GSM alerts.
# Smart Sewage Blockage Monitoring System

## Overview

The Smart Sewage Blockage Monitoring System is an ESP32-based IoT project designed to detect sewage blockages and harmful gas levels in drainage systems.

The system uses an ultrasonic sensor to monitor sewage level and a gas sensor to detect hazardous gases. When abnormal conditions are detected, the system provides an alert through GSM and sends the location using GPS.

## Features

- Real-time sewage blockage detection
- Harmful gas detection
- GPS-based location tracking
- GSM SMS alert
- 16x2 I2C LCD status display
- ESP32-based control
- Automatic monitoring
- Reduced manual inspection

## Hardware Components

| Component | Purpose |
|---|---|
| ESP32 DevKit V1 | Main controller |
| HC-SR04 | Sewage level/blockage detection |
| MQ-2 Gas Sensor | Gas detection |
| NEO-6M GPS | Location tracking |
| SIM800A GSM | SMS alert |
| 16x2 I2C LCD | Status display |
| Power Supply | System power |

## Software Used

- Arduino IDE
- Embedded C/C++
- ESP32 Board Package
- TinyGPS++ Library
- LiquidCrystal_I2C Library

## Working Principle

1. HC-SR04 measures the sewage level.
2. ESP32 reads the sensor values.
3. MQ-2 monitors gas concentration.
4. GPS obtains the location.
5. If blockage or harmful gas is detected, ESP32 generates an alert.
6. SIM800A sends an SMS notification.
7. LCD displays the current system status.

## Pin Configuration

| Device | ESP32 Pin |
|---|---|
| HC-SR04 TRIG | GPIO 5 |
| HC-SR04 ECHO | GPIO 18 |
| MQ-2 | GPIO 34 |
| GPS RX | GPIO 16 |
| GPS TX | GPIO 17 |
| GSM RX | GPIO 27 |
| GSM TX | GPIO 26 |
| I2C SDA | GPIO 21 |
| I2C SCL | GPIO 22 |

## Detection Conditions

- Sewage blockage: Distance < 15 cm
- Gas alert: Gas sensor value > 2000

## Applications

- Smart sewage monitoring
- Urban drainage systems
- Municipal sewage management
- Smart city infrastructure
- Industrial wastewater monitoring
- Environmental monitoring

## Advantages

- Early blockage detection
- Real-time monitoring
- Automatic SMS alerts
- GPS location information
- Reduced manual inspection
- Improved worker safety

## Future Scope

The system can be enhanced with cloud IoT platforms, mobile applications, AI-based predictive maintenance, water-quality sensors, automatic cleaning mechanisms, and solar-powered operation.

## Project Structure

```text
Code/
Circuit_Diagram/
Block_Diagram/
PCB/
Images/
Documentation/
Demo/
