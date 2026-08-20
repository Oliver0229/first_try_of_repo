# Dryer Subsystem Requirements

# Electronic Architecture

## System Boards

The system consists of four electronic boards:

1. Dryer Main Board
2. Dryer UI

---

## Main Boards

### Dryer Main Board

Main controller for the drying subsystem.

---

## User Interfaces

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

4 LEDs

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

1 Buzzers

---

## Communications

### Function

Serial communication with other system modules.

### Type

Serial Interface

### Quantity

1 UART Interfaces

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

2 Buttons

Identified in the block diagram as:

- Start
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
| Buzzer | 1 | PWM | Output (PWM) |
| LEDs | 4 | 4 | Output (Digital/High-Drive) |
| Buttons | 2 | 2 | Input (Digital/Pull-Up) |
| Knobs | 2 | 2 | Input (Analog/ADC) |
| Comm Interface | 1 (RX and TX) | UART | UART (RX/TX) |
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