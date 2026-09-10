## Slide 3 - Dryer

- Side Panel (2X)
- Front Panel ASM
- Door ASM
- Drum ASM
- Rear Panel ASM
- Chassis Base ASM
- Top Panel
- Motor ASM
- Top Shield
- Access Panel
- Blower Housing ASM
- Belt
- Control Panel ASM
- Enclosure ASM
- Harness Main Electric

---

# Slide 7 - Dryer (Gas Version)

- Side Panel (2X)
- Front Panel ASM
- Door ASM
- Drum ASM
- Control Panel ASM
- Rear Panel ASM
- Chassis Base ASM
- Gas System ASM
- Top Panel
- Motor ASM
- Top Shield
- Access Panel
- Blower Housing ASM
- Belt
- Enclosure ASM
- Harness Main Gas

---

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

# Sensor Rod

## Overview
The Sensor Rod is a moisture-sensing component located in the trap duct area of the dryer. It detects contact ("hits") between clothes and the sensor rods during drum rotation. These signals are used by the control system to estimate load moisture and determine when the drying cycle should end automatically.

### Electrical Requirements



