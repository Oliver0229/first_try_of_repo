# User Interface Controls Specification (Dryer)

The system shall allow the user to start, pause, and resume a wash cycle using the Start/Pause button, such that a valid configuration starts the cycle and selecting Pause during execution temporarily stops the process.

---

# UI Dryer / Cycle Selector Knob
1. PURPOSE
The circuit selector must allow the user to choose an operating cycle using a rotary knob with discrete positions and communicate the selected position to the main microcontroller.


2. BLOCK REQUIREMENTS (apply to ALL variants)

The circuit must uniquely report the active position of the knob.
The circuit must detect and report an invalid position condition (out of range, open or short contact).
The position change must be reflected in the control logic within ≤ [X] ms from the mechanical engagement of the selector.
The circuit must operate within the power supply range of the GEA4 board.
A selector failure must not prevent the appliance from turning off.
3. OUT OF REACH

Mechanical strain, turning effort, and knob decoration. (Mechanical/Industrial Design domain).

# Washer Selections

## UI Washer / Drain & Spin Cycle

The system shall allow the user to select the Drain & Spin cycle using the control panel knob, and when the cycle is started, the system shall configure and execute only the drain and spin stages without performing a full wash cycle.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to perform only the drain and spin functions without executing wash or rinse stages.

**Acceptance Criteria:**
When the Drain & Spin position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Drain & Spin as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Speed Wash Cycle

The system shall allow the user to select the Speed Wash cycle using the control panel knob, and when selected, the system shall apply the predefined duration and settings associated with the Speed Wash cycle.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the predefined Speed Wash cycle parameters.

**Acceptance Criteria:**
When the Speed Wash position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Speed Wash as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Delicates Cycle

The system shall allow the user to select the Delicates cycle using the control panel knob, and when selected, the system shall apply the washing settings defined in the Delicates profile.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Delicates cycle parameters.

**Acceptance Criteria:**
When the Delicates position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Delicates as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Casuals Cycle

The system shall allow the user to select the Casuals cycle using the control panel knob, and when selected, the system shall register the cycle as Casuals before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Casuals cycle parameters.

**Acceptance Criteria:**
When the Casuals position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Casuals as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Bulky Items Cycle

The system shall allow the user to select the Bulky Items cycle using the control panel knob, and when selected, the system shall register the cycle as Bulky Items before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Bulky Items cycle parameters.

**Acceptance Criteria:**
When the Bulky Items position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Bulky Items as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Heavy Whites

The system shall allow the user to select the Heavy Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Heavy Whites before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Heavy Whites cycle parameters.

**Acceptance Criteria:**
When the Heavy Whites position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Heavy Whites as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Medium Whites

The system shall allow the user to select the Medium Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Medium Whites before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Medium Whites cycle parameters.

**Acceptance Criteria:**
When the Medium Whites position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Medium Whites as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Light Whites

The system shall allow the user to select the Light Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Light Whites before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Light Whites cycle parameters.

**Acceptance Criteria:**
When the Light Whites position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Light Whites as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Heavy Colors

The system shall allow the user to select the Heavy Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Heavy Colors before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Heavy Colors cycle parameters.

**Acceptance Criteria:**
When the Heavy Colors position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Heavy Colors as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Medium Colors

The system shall allow the user to select the Medium Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Medium Colors before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Medium Colors cycle parameters.

**Acceptance Criteria:**
When the Medium Colors position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Medium Colors as the active cycle configuration until a different cycle is selected or the wash cycle starts.

## UI Washer / Light Colors

The system shall allow the user to select the Light Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Light Colors before the wash cycle starts.

**Control Type:** Cycle Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Light Colors cycle parameters.

**Acceptance Criteria:**
When the Light Colors position is selected on the cycle selector knob, the system shall indicate the selected cycle and store Light Colors as the active cycle configuration until a different cycle is selected or the wash cycle starts.

# Temperature Selector

The Temperature Selector is implemented through a dedicated rotary knob labeled **"Temperature"**.

The user can select one of four available heat settings before starting the cycle. Only one temperature level can be active at any given time.

**Available Settings:**
- Regular
- Medium
- Low
- No Heat

**Acceptance Criteria:**
The selected temperature level shall be recorded by the system before cycle execution.

## UI Washer / Tap Cold Temperature

The system shall allow the user to select the Tap Cold temperature option using the temperature selector knob, and when selected, the system shall register Tap Cold as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Tap Cold temperature setting.

**Acceptance Criteria:**
When the Tap Cold position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Tap Cold as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

## UI Washer / Cold Temperature

The system shall allow the user to select the Cold temperature option using the temperature selector knob, and when selected, the system shall register Cold as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Cold temperature setting.

**Acceptance Criteria:**
When the Cold position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Cold as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

## UI Washer / Cool Temperature

The system shall allow the user to select the Cool temperature option using the temperature selector knob, and when selected, the system shall register Cool as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Cool temperature setting.

**Acceptance Criteria:**
When the Cool position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Cool as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

## UI Washer / Colors Temperature

The system shall allow the user to select the Colors temperature option using the temperature selector knob, and when selected, the system shall register Colors as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Colors temperature setting.

**Acceptance Criteria:**
When the Colors position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Colors as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

## UI Washer / Warm Temperature

The system shall allow the user to select the Warm temperature option using the temperature selector knob, and when selected, the system shall register Warm as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Warm temperature setting.

**Acceptance Criteria:**
When the Warm position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Warm as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

## UI Washer / Hot Temperature

The system shall allow the user to select the Hot temperature option using the temperature selector knob, and when selected, the system shall register Hot as the active temperature setting before the wash cycle starts.

**Control Type:** Temperature Selector Knob

**Available States:**
- Selected
- Not Selected

**Expected Action:**
Configures the washer to operate using the Hot temperature setting.

**Acceptance Criteria:**
When the Hot position is selected on the temperature selector knob, the system shall indicate the selected temperature and store Hot as the active temperature configuration until a different temperature setting is selected or the wash cycle starts.

# Dryer Selections

# Temperature Selector

The Temperature Selector is implemented through a dedicated rotary knob labeled **"Temperature"**.

The user can select one of four available heat settings before starting the cycle. Only one temperature level can be active at any given time.

**Available Settings:**
- Regular
- Medium
- Low
- No Heat

**Acceptance Criteria:**
The selected temperature level shall be recorded by the system before cycle execution.

## Regular Temperature

The system shall allow the user to select the Regular temperature option, and when selected, the system shall set the heat level to Regular.

## Medium Temperature

The system shall allow the user to select the Medium temperature option, and when selected, the system shall set the heat level to Medium.

## Low Temperature

The system shall allow the user to select the Low temperature option, and when selected, the system shall set the heat level to Low.

## No Heat Temperature

The system shall allow the user to select the No Heat temperature option, and when selected, the system shall disable the heating element and perform the drying cycle using air only.

## Cottons - Less Dry Cycle

The system shall allow the user to select the Cottons / Less Dry cycle, and when selected, the system shall apply the Cottons drying profile with the Less Dry level.

**Control Type:** Knob Option
**Available States:**
- Active
- Inactive

**Expected Action:**
Configures gentle drying for cotton garments.

**Acceptance Criteria:**
When selected, the system applies the Cottons profile with the Less Dry level.


## Cottons - Medium Dry / Normal Cycle

The system shall allow the user to select the Cottons / Medium Dry Normal cycle, and when selected, the system shall apply the Cottons drying profile with the Medium Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures normal drying for cotton garments.

**Acceptance Criteria:**
When selected, the system applies the Cottons profile with the Medium Dry level.


## Cottons - More Dry Cycle

The system shall allow the user to select the Cottons / More Dry cycle, and when selected, the system shall apply the Cottons drying profile with the More Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures intensive drying for cotton garments.

**Acceptance Criteria:**
When selected, the system applies the Cottons profile with the More Dry level.


## Delicates - Less Dry Cycle

The system shall allow the user to select the Delicates / Less Dry cycle, and when selected, the system shall apply the Delicates drying profile with the Less Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures gentle drying for delicate garments.

**Acceptance Criteria:**
When selected, the system applies the Delicates profile with the Less Dry level.


## Delicates - More Dry Cycle

The system shall allow the user to select the Delicates / More Dry cycle, and when selected, the system shall apply the Delicates drying profile with the More Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures intensive drying for delicate garments.

**Acceptance Criteria:**
When selected, the system applies the Delicates profile with the More Dry level.


## Casuals - Less Dry Cycle

The system shall allow the user to select the Casuals / Less Dry cycle, and when selected, the system shall apply the Casuals drying profile with the Less Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures gentle drying for casual clothing.

**Acceptance Criteria:**
When selected, the system applies the Casuals profile with the Less Dry level.


## Casuals - More Dry Cycle

The system shall allow the user to select the Casuals / More Dry cycle, and when selected, the system shall apply the Casuals drying profile with the More Dry level.

**Control Type:** Knob Option

**Available States:**
- Active
- Inactive

**Expected Action:**
Configures intensive drying for casual clothing.

**Acceptance Criteria:**
When selected, the system applies the Casuals profile with the More Dry level.


# Timed Dry Cycles

The Timed Dry group provides fixed-duration drying programs that operate independently of moisture sensing algorithms.

## Time Dry - 80 Min. Cycle

The system shall allow the user to select the Time Dry / 80 Min. cycle, and when selected, the system shall set the drying timer to 80 minutes.

**Expected Action:**
Configures a fixed 80-minute drying cycle.

**Acceptance Criteria:**
When selected, the timer is set to 80 minutes.


## Time Dry - 60 Min. Cycle

The system shall allow the user to select the Time Dry / 60 Min. cycle, and when selected, the system shall set the drying timer to 60 minutes.

**Expected Action:**
Configures a fixed 60-minute drying cycle.

**Acceptance Criteria:**
When selected, the timer is set to 60 minutes.


## Time Dry - 40 Min. Cycle

The system shall allow the user to select the Time Dry / 40 Min. cycle, and when selected, the system shall set the drying timer to 40 minutes.

**Expected Action:**
Configures a fixed 40-minute drying cycle.

**Acceptance Criteria:**
When selected, the timer is set to 40 minutes.


## Time Dry - 30 Damp Dry Cycle

The system shall allow the user to select the Time Dry / 30 Damp Dry cycle, and when selected, the system shall apply the Damp Dry profile with a duration of 30 minute

**Expected Action:**
Configures a 30-minute damp-dry cycle.

**Acceptance Criteria:**
When selected, the system applies the Damp Dry profile with a duration of 30 minutes.


## Time Dry - 20 Dewrinkle Cycle

The system shall allow the user to select the Time Dry / 20 Dewrinkle cycle, and when selected, the system shall apply the Dewrinkle profile with a duration of 20 minutes.

**Expected Action:**
Configures a 20-minute wrinkle-release cycle.

**Acceptance Criteria:**
When selected, the system applies the Dewrinkle profile with a duration of 20 minutes.


## Time Dry - 10 Min. Cycle

The system shall allow the user to select the Time Dry / 10 Min. cycle, and when selected, the system shall set the drying timer to 10 minutes.

**Expected Action:**
Configures a quick 10-minute drying cycle.

**Acceptance Criteria:**
When selected, the timer is set to 10 minutes.

---

# Primary Controls (Buttons)
1. PURPOSE
The User Interface shall provide user input controls to support appliance operation commands.

2. BLOCK REQUIREMENTS
The User Interface shall provide two user command buttons.
The User Interface shall provide a Start/Pause button.
The User Interface shall provide a product-specific function button.
For Washer applications, the product-specific function button shall support the Deep Rinse / Extra Spin function.
For Dryer applications, the product-specific function button shall support the E-Dry function.
The system shall detect user button actuations.
The system shall process only one valid command per button actuation.
The system shall transmit valid user commands to the Main Control.
3. OUT OF REACH
Definition of event conditions requiring audible notification.
User-configurable sound settings.
Acoustic performance validation in the final appliance.

## Start / Pause Dryer Button

The system shall allow the user to start, pause, and resume a wash cycle using the Start/Pause button, such that a valid configuration starts the cycle and selecting Pause during execution temporarily stops the process.

**Control Type:** Primary Button

**Available States:**
- Ready
- Running
- Paused
- Completed

**Expected Action:**
Starts, pauses, or resumes the active drying cycle.

**Acceptance Criteria:**
With a valid configuration selected, pressing Start begins the cycle. During operation, pressing the button pauses execution while retaining all current settings.

## E-Dry Button

The system shall allow the user to enable or disable E-Dry mode, and when enabled, the visual state shall indicate activation and the cycle configuration shall include the energy-efficient E-Dry mode.

**Control Type:** Lever / Toggle

**Available States:**
- Enabled
- Disabled

**Expected Action:**
Activates energy-efficient drying operation.

**Acceptance Criteria:**
When enabled, the visual indication changes and the cycle configuration includes E-Dry mode.

## Start / Pause Washer Button

The system shall allow the user to start, pause, and resume a wash cycle using the Start/Pause button, such that a valid configuration starts the cycle and selecting Pause during execution temporarily stops the process.

**Control Type:** Primary Button

**Available States:**
- Ready
- Running
- Paused
- Completed

**Expected Action:**
Starts, pauses, or resumes the active wash cycle.

**Acceptance Criteria:**
With a valid configuration selected, pressing Start begins the cycle. During operation, pressing the button pauses execution while retaining all current settings. Pressing the button again resumes the cycle from the paused state.

---

# Status Indicators

1. PURPOSE
The User Interface shall provide visual indication of appliance status and operating conditions.

2. BLOCK REQUIREMENTS
The User Interface shall provide LED status indicators.
The system shall control indicator states based on appliance operating conditions.
The system shall activate only the indicators associated with the current operating state.
The system shall update indicator status using information received from the Main Control.
For Washer applications, the User Interface shall provide five LED indicators: Deep Rinse, Wash, Spin, Lid Locked, and Rinse.
For Dryer applications, the User Interface shall provide four LED indicators.
3. OUT OF REACH
Definition of appliance operating states.
Mechanical LED implementation.
User interpretation of status indications.

## Damp Indicator

The system shall illuminate the Damp indicator light exclusively while the damp-dry phase is active and keep it off during all other drying phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Damp phase.

---

## Dry Indicator

The system shall illuminate the Dry indicator light exclusively while the main drying phase is active and keep it off during all other drying phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Dry phase.

---

## Cooling Indicator

The system shall illuminate the Cooling indicator light exclusively while the cooling phase is active and keep it off during all other drying phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Cooling phase.

---





# Spin Indicator

The system shall illuminate the Spin indicator light exclusively while the spin phase is in progress and keep it off during all other cycle phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Spin phase.

---

# Rinse Indicator

The system shall illuminate the Rinse indicator light exclusively while the rinse phase is in progress and keep it off during all other cycle phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Spin phase.

---

## Lid Locked Indicator

The system shall illuminate the Lid Locked indicator light while the lid is locked and shall turn the indicator off only when it is safe for the user to open the lid.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Lid Locked is activated.

---

## Wash Indicator

The system shall illuminate the Wash indicator light exclusively while the wash phase is in progress and keep it off during all other cycle phases.

**Available States:**
- On
- Off

**Acceptance Criteria:**
The indicator is active only during the Wash phase.

---