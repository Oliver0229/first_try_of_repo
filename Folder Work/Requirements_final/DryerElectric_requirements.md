# Thermistor

## Requirements
On start key release, the SSD should reflect the inlet/outlet temperature. The drum motor should start, and the corresponding coil should turn on (gas units just turn on the heat). Opening the dryer door or deselecting the test will turn off the drum and heaters.

### No. Part
- **559C259G003**

![Thermistor](../../images/photos/Dryer/Thermistor.png)

---

# Sensor Rod

## Requirement
The moisture rod sensor shall provide a continuous moisture-related electrical signal to the control during sensor-dry operation, and the control shall use this signal to determine dryness progress, dynamically adjust remaining cycle time, and trigger phase transitions toward dry/ready completion while preserving safe operation and service diagnostics; if the sensor input indicates an abnormal condition, the control shall register the corresponding service-visible fault according to platform criteria without delegating interpretation to the user interface.

### No. Part
- **540B266P001**

![SensorRod](../../images/photos/Dryer/Sensor_Rod.png)

---

# Door Switch
## Requirement
The Door Switch system shall protect the user by continuously monitoring the dryer door status and providing open and closed state feedback to the control; the control shall verify that the door is closed before allowing cycle initiation, immediately respond to a door opening event during operation by disabling functions that require a closed-door condition, maintain accurate door status monitoring throughout the cycle, and prevent operation whenever an unsafe door-open condition exists, ensuring safe dryer operation and user access protection. 

### No. Part
- 248C1157P001

![DoorSwitch](../../images/photos/Dryer/Door_Switch.png)

---

# Motor Drive
## Requirement
The dryer drive motor shall rotate the drum during an active drying cycle to provide continuous load tumbling.
The Main Control shall energize the drive motor when a valid cycle start request is received and all operating conditions are satisfied.
The Main Control shall de-energize the drive motor when the drying cycle is completed or interrupted.
### No. Part

---

