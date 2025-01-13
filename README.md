# Soil-Moisture-Level-Detection

This sensor measures the volumetric content of water inside the soil and gives the moisture level as output. The sensor is equipped with both analog and digital output, so it can be used in both analog and digital mode. In this article, we are going to interface the sensor in both modes.

**Hardware Requirements:**
•	1x Breadboard
•	1x Arduino Uno R3
•	1x Soil moisture sensor
•	Jumper Wires

**Specifications:**
•	Input voltage     3.3-5V
•	Output voltage  0-4.2V
•	Input current     35mA
•	Output signal    Both Analog and Digital
•	Pin Out – Soil Moisture Sensor

The soil Moisture sensor FC-28 has the following four pins:
•	VCC: For power
•	A0: Analog output
•	D0: Digital output
•	GND: Ground
The module also contains a potentiometer which will set the threshold value.

**Working of Sensor:**
The soil moisture sensor consists of two probes which are used to measure the volumetric content of water. The two probes allow the current to pass through the soil and then it gets the resistance value to measure the moisture value.
When there is more water, the soil will conduct more electricity which means that there will be less resistance. Therefore, the moisture level will be higher. 
Dry soil conducts electricity poorly, so when there will be less water, then the soil will conduct less electricity which means that there will be more resistance. Therefore, the moisture level will be lower.
This sensor can be connected in two modes; Analog mode orDigital mode. First, connect it in Analog mode and then use it in Digital mode.

**Soil Moisture Detection with Arduino Uno:**

![image](https://github.com/user-attachments/assets/83058c16-8d4d-473e-ab87-1791c8a56075)

**Output:**

![image](https://github.com/user-attachments/assets/33d2a20c-e54c-4fd5-ad28-d32031d01ce0)

**Soil Moisture Detection with Raspberry Pi:**

![image](https://github.com/user-attachments/assets/9822c81e-6ada-4eab-86e3-89b39e552d95)

**Output:**

![image](https://github.com/user-attachments/assets/1353c6e3-2325-4a63-8257-9c0ca51213d0)








