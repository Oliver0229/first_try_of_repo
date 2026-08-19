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










---------------------------------------------------------------------------------------

## Electric Dryer Operation

| Item | Description |
|--------|-------------|
| Air Inlet | Air enters from outside the cabinet through louvers and available openings. |
| Heating Process | Air passes through the electric heating element where it is heated. |
| Drum Air Flow | Hot air enters the drum to evaporate moisture from the clothes. |
| Moisture Removal | Moist air passes through the lint filter and trap duct while being extracted from the drum. |
| Exhaust | Air exits the system through the exhaust duct. |

---

## Gas Dryer Operation

| Item | Description |
|--------|-------------|
| Air Inlet | Air enters from outside the cabinet through louvers and available openings. |
| Heating Process | Air is heated by gas combustion inside the combustion chamber. |
| Air Mixing | Fresh air and heated air are mixed before passing through the gas diffuser. |
| Drum Air Flow | Heated air enters the drum to evaporate moisture from the clothes. |
| Moisture Removal | Moist air passes through the lint filter and trap duct while being extracted from the drum. |
| Exhaust | Air exits the system through the exhaust duct. |

---

# Heat Control Comparison

| Electronic Dryer | Mechanical / Gas Dryer |
|-----------------|------------------------|
| Inlet Thermistor | Inlet Thermostat |
| Outlet Thermistor | Safety Thermostat |
| Safety Thermostat | Outlet Thermostat |
| Outlet Thermostat | Hi-Limit Thermostat |
| Hi-Limit Thermostat | |

---

# Moisture Sensing Comparison

| Electronic Dryer | Mechanical / Gas Dryer |
|-----------------|------------------------|
| Sensor Rods (Metal Bars) | Timer |
| | Safety Thermostat |
| | Outlet Thermostat |

---

# Noise Parameters

| Category | Parameter |
|-----------|-----------|
| Exhaust Restrictions | Long Exhaust Ducts |
| Exhaust Restrictions | Ducts with Elbows/Bends |
| Exhaust Restrictions | Lint Accumulation |
| Exhaust Restrictions | Dirty Lint Filter |
| Exhaust Restrictions | Moisture Recirculation |
| Load Size | Very Large Loads |
| Load Size | Bulky Loads |
| Load Size | Single Item or Very Light Loads |
| Fabric Type | Synthetic Fabrics |
| Fabric Type | Cotton |
| Fabric Type | Polyester/Cotton Blend |
| Fabric Type | Lycra / Spandex |
| Fabric Type | Sportswear |
| Fabric Type | Mixed Fabric Loads |

### Notes

- More restricted exhaust systems increase drying time.
- Larger loads increase drying time.
- A greater combination of fabric types makes drying prediction more difficult.

---

# Dryer Process Flow

## Electric Dryer Process

1. Air enters the dryer from the environment.
2. Air passes through the electric heating element.
3. Air is heated to the required temperature.
4. Heated air enters the drum.
5. Moisture evaporates from the clothes.
6. Moist air exits the drum.
7. Air passes through the lint filter.
8. Air flows through the trap duct.
9. Air is exhausted outside the appliance.

---

## Gas Dryer Process

1. Air enters the dryer from the environment.
2. Gas combustion generates heat inside the combustion chamber.
3. Heated air mixes with fresh air.
4. Mixed air passes through the gas diffuser.
5. Heated air enters the drum.
6. Moisture evaporates from the clothes.
7. Moist air exits the drum.
8. Air passes through the lint filter.
9. Air flows through the trap duct.
10. Air is exhausted outside the appliance.

---

# Dryer Components

## Rear Heat Configuration

- Cabinet
- Drum
- Rear Bulkhead
- Front Bulkhead
- Electric Heater Assembly
- Burner Assembly (Gas Models)
- Combustion Chamber
- Gas Diffuser
- Blower Wheel
- Blower Housing
- Trap Duct
- Lint Filter
- Exhaust Duct
- Drive Motor
- Drive Belt
- Idler Pulley
- Inlet Thermistor
- Outlet Thermistor
- Inlet Thermostat
- Outlet Thermostat
- Safety Thermostat
- Hi-Limit Thermostat
- Moisture Sensor Rods
- Control Board
- User Interface Assembly
- Door Assembly
- Air Inlet Louvers

---------------------------------------------------------------------------------------
# User Interface Controls Specification


## Cottons - Less Dry Cycle

| Field | Value |
|------------|------------|
| Component | Cottons - Less Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Cottons / Less Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures gentle drying for cotton garments |
| Acceptance Criteria | When selected, the system applies the Cottons profile with the Less Dry level |

## Cottons - Medium Dry / Normal Cycle

| Field | Value |
|------------|------------|
| Component | Cottons - Medium Dry / Normal Cycle |
| Control Type | Knob Option |
| Label on the Panel | Cottons / Medium Dry Normal |
| Values / States | Active / Inactive |
| Expected Action | Configures normal drying for cotton garments |
| Acceptance Criteria | When selected, the system applies the Cottons profile with the Medium Dry level |

## Cottons - More Dry Cycle

| Field | Value |
|------------|------------|
| Component | Cottons - More Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Cottons / More Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures intensive drying for cotton garments |
| Acceptance Criteria | When selected, the system applies the Cottons profile with the More Dry level |

## Delicates - Less Dry Cycle

| Field | Value |
|------------|------------|
| Component | Delicates - Less Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Delicates / Less Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures gentle drying for delicate garments |
| Acceptance Criteria | When selected, the system applies the Delicates profile with the Less Dry level |

## Delicates - More Dry Cycle

| Field | Value |
|------------|------------|
| Component | Delicates - More Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Delicates / More Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures intensive drying for delicate garments |
| Acceptance Criteria | When selected, the system applies the Delicates profile with the More Dry level |

## Casuals - Less Dry Cycle

| Field | Value |
|------------|------------|
| Component | Casuals - Less Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Casuals / Less Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures gentle drying for casual clothing |
| Acceptance Criteria | When selected, the system applies the Casuals profile with the Less Dry level |

## Casuals - More Dry Cycle

| Field | Value |
|------------|------------|
| Component | Casuals - More Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Casuals / More Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures intensive drying for casual clothing |
| Acceptance Criteria | When selected, the system applies the Casuals profile with the More Dry level |

## Time Dry - 80 Min. Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 80 Min. Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 80 Min. |
| Values / States | Active / Inactive |
| Expected Action | Configures a fixed 80-minute drying cycle |
| Acceptance Criteria | When selected, the timer is set to 80 minutes |

## Time Dry - 60 Min. Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 60 Min. Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 60 Min. |
| Values / States | Active / Inactive |
| Expected Action | Configures a fixed 60-minute drying cycle |
| Acceptance Criteria | When selected, the timer is set to 60 minutes |

## Time Dry - 40 Min. Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 40 Min. Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 40 Min. |
| Values / States | Active / Inactive |
| Expected Action | Configures a fixed 40-minute drying cycle |
| Acceptance Criteria | When selected, the timer is set to 40 minutes |

## Time Dry - 30 Damp Dry Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 30 Damp Dry Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 30 Damp Dry |
| Values / States | Active / Inactive |
| Expected Action | Configures a 30-minute damp-dry cycle |
| Acceptance Criteria | When selected, the system applies the Damp Dry profile with a duration of 30 minutes |

## Time Dry - 20 Dewrinkle Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 20 Dewrinkle Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 20 Dewrinkle |
| Values / States | Active / Inactive |
| Expected Action | Configures a 20-minute wrinkle-release cycle |
| Acceptance Criteria | When selected, the system applies the Dewrinkle profile with a duration of 20 minutes |

## Time Dry - 10 Min. Cycle

| Field | Value |
|------------|------------|
| Component | Time Dry - 10 Min. Cycle |
| Control Type | Knob Option |
| Label on the Panel | Time Dry / 10 Min. |
| Values / States | Active / Inactive |
| Expected Action | Configures a quick 10-minute drying cycle |
| Acceptance Criteria | When selected, the timer is set to 10 minutes |

## Temperature Selector

| Field | Value |
|------------|------------|
| Component | Temperature Selector |
| Control Type | Rotary Knob |
| Label on the Panel | Temperature |
| Values / States | Regular, Medium, Low, No Heat |
| Expected Action | Changes the heat level applied during drying |
| Acceptance Criteria | Only one temperature can be active at a time; the system records the selection before starting |

## Regular Temperature

| Field | Value |
|------------|------------|
| Component | Regular Temperature |
| Control Type | Knob Option |
| Label on the Panel | Regular |
| Values / States | Active / Inactive |
| Expected Action | Applies standard high heat |
| Acceptance Criteria | When selected, the system sets the heat level to Regular |

## Medium Temperature

| Field | Value |
|------------|------------|
| Component | Medium Temperature |
| Control Type | Knob Option |
| Label on the Panel | Medium |
| Values / States | Active / Inactive |
| Expected Action | Applies medium heat |
| Acceptance Criteria | When selected, the system sets the heat level to Medium |

## Low Temperature

| Field | Value |
|------------|------------|
| Component | Low Temperature |
| Control Type | Knob Option |
| Label on the Panel | Low |
| Values / States | Active / Inactive |
| Expected Action | Applies low heat |
| Acceptance Criteria | When selected, the system sets the heat level to Low |

## No Heat Temperature

| Field | Value |
|------------|------------|
| Component | No Heat Temperature |
| Control Type | Knob Option |
| Label on the Panel | No Heat |
| Values / States | Active / Inactive |
| Expected Action | Runs the cycle without heat (air only) |
| Acceptance Criteria | When selected, the system disables the heating element during the cycle |

## Start / Pause Button

| Field | Value |
|------------|------------|
| Component | Start / Pause Button |
| Control Type | Primary Button |
| Label on the Panel | Start / Pause |
| Values / States | Ready, Running, Paused, Completed |
| Expected Action | Starts, pauses, or resumes the drying cycle |
| Acceptance Criteria | With a valid configuration, Start begins the cycle; during execution, Pause stops the process while retaining the current settings |

## Damp Indicator

| Field | Value |
|------------|------------|
| Component | Damp Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Damp |
| Values / States | On / Off |
| Expected Action | Indicates that the damp-dry phase is active |
| Acceptance Criteria | The indicator turns on exclusively during the Damp phase |

## Dry Indicator

| Field | Value |
|------------|------------|
| Component | Dry Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Dry |
| Values / States | On / Off |
| Expected Action | Indicates that the main drying phase is active |
| Acceptance Criteria | The indicator turns on exclusively during the Dry phase |

## Cooling Indicator

| Field | Value |
|------------|------------|
| Component | Cooling Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Cooling |
| Values / States | On / Off |
| Expected Action | Indicates that the cooling phase is active |
| Acceptance Criteria | The indicator turns on exclusively during the Cooling phase |

## E-Dry Control

| Field | Value |
|------------|------------|
| Component | E-Dry Control |
| Control Type | Lever / Toggle |
| Label on the Panel | E-Dry |
| Values / States | Enabled / Disabled |
| Expected Action | Activates energy-efficient drying mode |
| Acceptance Criteria | When enabled, the visual state changes and the cycle configuration includes E-Dry mode |