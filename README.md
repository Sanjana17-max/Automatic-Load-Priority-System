# Automatic Load Priority System

## Overview
This project demonstrates an automatic 3-level load priority and shedding system.

The system automatically disconnects low-priority loads during power shortages
and provides visual and audible alerts.

## Features
- Automatic load priority control (High, Medium, Low)
- 3-level power condition detection
- Status indication using Green, Yellow, and Red LEDs
- Buzzer alert during severe power shortage
- Real-time power monitoring using potentiometer
- Serial Monitor logging
- Simulated and tested in TinkerCAD

## Components Used
- Arduino UNO
- Potentiometer
- LEDs with resistors
- Buzzer
- Breadboard and jumper wires

## Working Logic
- **Normal condition**: All loads ON (Green LED)
- **Moderate shortage**: Low-priority load OFF (Yellow LED)
- **Severe shortage**: Only high-priority load ON + buzzer alert (Red LED)

## Circuit Diagram
![Circuit Diagram](Circuit_Diagram/circuit_dia.png)

## Tools Used
- TinkerCAD
- Arduino IDE
- GitHub

## Author
Sanjana Sonawane
