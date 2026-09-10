# Washer  - Parts List

---

## Slide 4 - Washer

- Front Panel ASM
- Main Harness
- Panels ASM
- Cover ASM
- Lid ASM
- Tub Cover
- Infuser
- Basket ASM
- Suspension ASM
- Transmission ASM
- Tube
- Shipping Rod
- Cover Back ASM
- Harness Protector

---

# Functions Washer

# Water Valve
## Overview
### Electrical Requirements


- Connection to the water inlet​
- Allows water Flow to the dispenser​
- Flow cut-off​
- Withstand water pressure in OFF mode​
- Independently control hot and cold water inlets​
- Prevent impurities from entering the valve mechanism​
- To assemble connectors to terminals​
- Withstand operating conditions of 4000 cycles​
- Ensure material compat ibility with harness​

# Lid Switch

## Overview
The lid switch provides feedback to the control when the lid is open or closed.

### Low-Level Requirements

- When the lid is closed, the control shall provide a 60 Hz pulse train to the micro lid switch input pin.(gitrequirements example)
- When the lid is open, the control shall provide a constant logic high to the micro lid switch input pin.(gitrequirements example)
- Power shall be removed from the motor any time the lid is opened. (gitrequirements example)
- The lid switch input shall be debounced for at least 100ms and at most 200ms. (gitrequirements example)

- Allow to pass the striker.​
- Avoid to open the lid in spin mode​.
- Withstand force to open lid locked (UL 2157).​
- Feedback to control when the lid is closed & open.​
- Provide quick release of the lid after basket stop.​
- Being reliable for Service (10 times assembled and disassembly at least)​.
- Send 2 types of signal  (lid blocked and lid position)​.

## Functional Requirements
If the lid can be opened during a running cycle without pressing pause, when the lid is closed the cycle shall automatically resume without pressing start. (gitrequirements example)
If the user must press pause to unlock and open the lid, then the consumer must press start to resume the cycle.(gitrequirements example)
The washer shall be allowed to fill with the lid open, but the motor may not move (power removed).(gitrequirements example)
Opening or closing the lid while the washer is in Idle state shall "wake up" the washer and transition to the standby state.(gitrequirements example)

![lidswitch](../images/photos/image.jpg)

# DC Mode Shift 

## Overview
The mode shifter is used to transition the washer between the agitate and spin states. The mode shifter has an internal switch which provides feedback when the system reaches the agitate state. 

### Requirements

# Motor Enable Relay 
## Overview
### Electrical Requirements
