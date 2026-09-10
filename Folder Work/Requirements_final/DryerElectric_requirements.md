# **Electric Dryer Requirements**

# Inlet Control Thermistor

## Requirements
On start key release, the SSD should reflect the inlet/outlet temperature. The drum motor should start, and the corresponding coil should turn on (gas units just turn on the heat). Opening the dryer door or deselecting the test will turn off the drum and heaters.

### No. Part
- **559C259G003**

![Thermistor](../../images/photos/Dryer/Thermistor.png)

---

# Outlet Control Thermistor

## Requirements
On start key release, the SSD should reflect the inlet/outlet temperature. The drum motor should start, and the corresponding coil should turn on (gas units just turn on the heat). Opening the dryer door or deselecting the test will turn off the drum and heaters.

### No. Part
- **559C259G003**

![Thermistor](../../images/photos/Dryer/Thermistor.png)

---

# Moisture Sensor Rod

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
The Dryer Drive Motor system shall provide drum rotation and airflow generation throughout the drying process by receiving motor enable commands from the Main Control, driving the drum and blower assembly at the required operating speed, transitioning the internal centrifugal switch from start to run operation, enabling heat source operation only after valid motor rotation has been established, shutting down when cycle completion or interruption conditions occur, and maintaining safe operation through automatic overload protection whenever abnormal motor loading or overheating conditions are detected.

### No. Part
- **234D1469P008**

![DriveMotor](../../images/photos/Dryer/DriveMotor.png)

---

# Harness Elec ASM
## Requirement
The system shall provide electrical connectivity between the main control board and the lid lock assembly to enable lid status monitoring and lid locking functions during operation.

### NO.Part
- **234D2622G006** si existe

![HarnessElec](../../images/photos/Dryer/HarnessElecDryer.png)

---

# Harness Door ASM
## Requirement
The system shall provide electrical connectivity between the main control board and the door switch assembly to enable door status monitoring during dryer operation.

### NO.Part
- **189D7183G003** si existe

![HarnessDoor1](../../images/photos/Dryer/HarnessDoor1.png)
![HarnessDoor2](../../images/photos/Dryer/HarnessDoor2.png)


---

# Harness Comunication
## Requirement
The system shall provide electrical connectivity between the user interface and the control system to support command and status communication.

### NO.Part
- **234D2640G002** si existe

![HarnessComunication](../../images/photos/Dryer/HarnessComuniction.png)

---

# Harness UI
## Requirement
The system shall provide electrical connectivity between the main control board and the user interface components to support cycle selection, start commands, and status indication functions.

### NO.Part
- **189D7182

![HarnessUI](../../)

---

# Safety Thermostat
## Requirement
The Safety Thermostat system shall protect the appliance from abnormal heating conditions, interrupting power to the heating source whenever the calibrated safety threshold is exceeded, maintaining protection throughout the overheating condition, and automatically restoring operation only after the temperature has returned within the defined safe operating range.

### No. Part

---

# Inlet Control Thermostat
## Requirement
The Inlet Control Thermostat shall regulate dryer heating performance by monitoring incoming air temperature at the heat source, cycling the heating system as required to maintain controlled operating temperatures, interrupting heating operation whenever the specified control threshold is exceeded, and automatically restoring heating capability once normal operating temperatures have been reestablished.

### No. Part

---

# Outlet Control Thermostat
## Requirement
The Outlet Control Thermostat shall regulate drying performance by monitoring outgoing airflow temperature and controlling heat source operation to maintain the required drying temperature profile; the thermostat shall interrupt heating when the defined outlet temperature threshold is exceeded and automatically restore heating operation once outlet temperature returns to the acceptable operating range.

### No. Part

---

# High Limit Thermostat
## Requirement
The High Limit Thermostat system shall provide secondary thermal protection for the dryer by monitoring critical temperature conditions near the heating source, interrupting motor operation whenever temperatures exceed the maximum allowable safety limit, preventing continued operation under hazardous overheating conditions, and automatically restoring operation only after temperature levels return below the thermostat reset threshold.

### No. Part
- ****