# Centauro Architecture 

# Electronic Architecture

## System Boards

The system consists of four electronic boards:

1. Washer Main Board
2. Dryer Main Board
3. Washer UI
4. Dryer UI

---

## Main Boards

### Washer Main Board

Main controller for the washing subsystem.

### Dryer Main Board

Main controller for the drying subsystem.

---

## User Interfaces

### Washer UI

User Interface dedicated to the washer subsystem.

### Dryer UI

User Interface dedicated to the dryer subsystem.

---

# MCU Block Diagram

## MCU

Responsible for:

- System logic
- Input monitoring
- LED control
- Buzzer control
- Communication with other boards
- Programming and debugging

---

## LEDs

### Function

Visual indicators used to provide system status feedback to the user.

### Quantity

5 LEDs

---

## Status Indicator

Provides status information related to the active cycle or operating stage.

---

## Buzzer

### Function

Generate audible alerts.

### Type

Piezo Alert

### Quantity

2 Buzzers

---

## Communications

### Function

Serial communication with other system modules.

### Type

Serial Interface

### Quantity

2 UART Interfaces

---

## Programming

### Function

Firmware programming and debugging.

### Interfaces

- SWD
- JTAG

---

## Buttons

### Function

Digital inputs used for user interaction.

### Quantity

3 Buttons

Identified in the block diagram as:

- Start
- Deep Rinse
- E-Dry

---

## Knobs

### Function

Used for cycle and configuration selection.

### Quantity

2 Knobs

Identified in the block diagram as:

- Cycle
- Temp

---

## Power Input

### Function

Provides power to the UI board.

### Components

- Power Input
- Voltage Regulator

---

# UI Peripheral Summary

| Peripheral | Quantity | GPIO/Interface | Configuration |
|------------|----------|----------------|---------------|
| Buzzer | 2 | PWM | Output (PWM) |
| LEDs | 5 | 5 | Output (Digital/High-Drive) |
| Buttons | 3* | 3 | Input (Digital/Pull-Up) |
| Knobs | 2 | 2 | Input (Analog/ADC) |
| Comm Interface | 2 (RX and TX) | UART | UART (RX/TX) |
| Power Supply | 1 | 1 | VCC (3.3V/5V) |
| Programming | Variable | Variable | SWD / JTAG / Serial |
| GEA4 | 2 | 2 | GPIO/DTC |

---

# CENTAURO
# Hardware Interface Specification
## MCU: Renesas RA0E1 (R7FA0E1073CFJ#BA0)

---

## 1. Overview

The CENTAURO platform uses the Renesas RA0E1 microcontroller
(R7FA0E1073CFJ#BA0) as the main system controller. The device is
implemented in a 32-pin LQFP package and provides the required GPIO,
ADC, PWM, UART, and debugging interfaces for the application. 

### Device Features

- MCU Family: Renesas RA0E1
- Part Number: R7FA0E1073CFJ#BA0
- Flash Memory: 64 KB
- RAM: 12 KB
- Package: LQFP-32
- ADC Resolution: 12-bit
- PWM Channels: 7
- SWD Debug Support: Yes 

---

## 2. Power and System Pins

| Pin | Signal | MCU Function Acronymus | Description |
|------|---------|-------------|-------------|
| 4 | VSS | VSS | Ground reference |
| 7 | VCC | VDD | Main power supply |
| 13 | RESET | RES | Hardware reset input | 

---

## 3. Programming and Debug Interface

| Pin | Signal | MCU Function Acronymus |
|------|---------|-------------|
| 13 | RESET | RES |
| 16 | SWCLK | P300 / SWCLK |
| 17 | SWDIO | P108 / SWDIO | 

### Description

The SWD interface is used for firmware programming and debugging.
RESET remain available for device recovery and low-level
programming operations. 

---

## 4. GPIO Outputs

### Heartbeat Indicator

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 8 | GPIO_HEARTBEAT | PCLBUZO_C/P407 |

Indicates normal firmware execution and system activity. 

### LED Outputs

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 22 | GPIO_LED01 | P102 |
| 23 | GPIO_LED02 | P101 |
| 24 | GPIO_LED03 | P100 |
| 25 | GPIO_LED04 | P015 |
| 26 | GPIO_LED05 | P014 | 

---

## 5. GPIO Inputs

### User Buttons

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 9 | GPIO_BUTTON01 | P914/SCLA0_A |
| 10 | GPIO_BUTTON02 | P913/SCAA0_A | 

### Description

These inputs are connected to user interface buttons and are used for
system interaction and control. 

---

## 6. HaierLink Communication Interface

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 18 | TX_HAIERLINK | P109 |
| 19 | RX_HAIERLINK | P110 |
| 12 | GPIO_HAIERLINK_BUS_BUSY | P207 | 

### Description

UART-based communication channel used for the HaierLink interface.
The BUS_BUSY signal indicates communication bus availability. 

---

## 7. PWM Outputs

### Buzzer Control

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 20 | PWM_BUZZER_VOLUME | P112 |
| 21 | PWM_BUZZER_FREQUENCY | P103 | 

### Description

Two PWM channels are allocated for buzzer control:

- PWM_BUZZER_FREQUENCY controls the generated tone frequency.
- PWM_BUZZER_VOLUME controls the output duty cycle and sound level. 

---

## 8. ADC Inputs

### Hardware Identification Channels

| Pin | Signal | MCU Function Acronymus |
|---------|-----|---------|
| 29 | ADC_SEL_KNOW01 | P009 / AN003 |
| 28 | ADC_SEL_KNOW02 | P012 / AN004 | 

### Description

These ADC inputs are connected to resistive divider networks used to
identify hardware variants, product personality, or board
configuration during system startup. 

---

## 9. Complete Pin Mapping

| Pin | Application Signal | MCU Function Acronymus |
|-----|-------------------|-------------|
| 4 | VSS | VSS |
| 7 | VCC | VDD |
| 8 | GPIO_HEARTBEAT | PCLBUZO_C/P407 |
| 9 | GPIO_BUTTON01 | P914/SCLA0_A |
| 10 | GPIO_BUTTON02 | P913/SCAA0_A |
| 12 | GPIO_HAIERLINK_BUS_BUSY | P207 |
| 13 | RESET | RES |
| 16 | SWCLK | P300 / SWCLK |
| 17 | SWDIO | P108 / SWDIO |
| 18 | TX_HAIERLINK | P109 |
| 19 | RX_HAIERLINK | P110 |
| 20 | PWM_BUZZER_VOLUME | P112 |
| 21 | PWM_BUZZER_FREQUENCY | P103 | 
| 22 | GPIO_LED01 | P102 |
| 23 | GPIO_LED02 | P101 | 
| 24 | GPIO_LED03 | P100 |
| 25 | GPIO_LED04 | P015 |
| 26 | GPIO_LED05 | P014 |
| 29 | ADC_SEL_KNOW01 | P009 / AN003 |
| 28 | ADC_SEL_KNOW02 | P012 / AN004 |
 
---

## 11. Acronyms

| Acronym | Description |
|----------|-------------|
| ADC | Analog-to-Digital Converter |
| GPIO | General Purpose Input/Output |
| PWM | Pulse Width Modulation |
| UART | Universal Asynchronous Receiver Transmitter |
| SWD | Serial Wire Debug |
| TX | Transmit Data |
| RX | Receive Data |
| VDD | Power Supply |
| VSS | Ground Reference | 