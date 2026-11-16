# IoT Practicals – Arduino Board Wiring Connections

## Experiment 1: LED Interfacing and Blinking

**Connections:**
- No external connections required (assuming the built-in LED is used).

---

## Experiment 2: Sensor Interfacing (MQ-2 Gas Sensor)

### MQ-2 Gas Sensor Connections

| MQ-2 Sensor Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| GND | GND |
| A0 | A0 |

### Buzzer Connections

| Buzzer Pin | Arduino Connection |
|---|---|
| GND | GND |
| VIN / Positive | Digital Pin 8 |

---

## Experiment 3: DC Motor Interfacing and Speed Control Using PWM

### Servo Motor Connections

| Servo Wire | Arduino Connection |
|---|---|
| Orange (Signal) | Digital Pin 9 |
| Red (VCC) | 5V |
| Brown (GND) | GND |

---

## Experiment 4: 16×2 LCD Interfacing

### LCD Connections

| LCD Pin | Pin Name | Arduino Connection |
|---|---|---|
| 1 | VSS | GND |
| 2 | VDD | 5V |
| 3 | V0 / VEE | Potentiometer Middle Pin |
| 4 | RS | Digital Pin 12 |
| 5 | RW | GND |
| 6 | E | Digital Pin 11 |
| 7–10 | D0–D3 | Not Connected |
| 11 | D4 | Digital Pin 5 |
| 12 | D5 | Digital Pin 4 |
| 13 | D6 | Digital Pin 3 |
| 14 | D7 | Digital Pin 2 |
| 15 | LED+ / A | 5V |
| 16 | LED− / K | GND |

### Potentiometer Connections

| Potentiometer Pin | Connection |
|---|---|
| Pin 1 (Left) | 5V (VCC) |
| Pin 2 (Middle) | LCD V0 / VEE |
| Pin 3 (Right) | GND |

**Note:** The potentiometer is used to adjust the LCD contrast.

---

## Experiment 5: Temperature Sensor Interfacing

### DHT11 Sensor Connections

| DHT11 Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| DATA | Digital Pin 2 |
| GND | GND |

---

## Experiment 6: PIR Sensor Interfacing with Buzzer

### PIR Sensor Connections

| PIR Sensor Pin | Arduino Connection |
|---|---|
| VCC | 5V |
| OUT | Digital Pin 2 |
| GND | GND |

### Buzzer Connections

| Buzzer Pin | Arduino Connection |
|---|---|
| GND | GND |
| VIN / Positive | Digital Pin 8 |

---
