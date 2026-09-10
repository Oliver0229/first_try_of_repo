# User Interface Controls Specification

## Main Cycle Selector

| Field | Value |
|------------|------------|
| Component | Main Cycle Selector |
| Control Type | Rotary Knob |
| Label on the Panel | Washer Cycles |
| Values / States | Off, Colors, Whites, Drain & Spin, Speed Wash, Delicates, Casuals, Bulky Items |
| Expected Action | Changes the selected wash cycle when the knob is turned |
| Acceptance Criteria | When a cycle is selected, the active option is visually identified and the system stores the selected cycle |

---

## Colors Cycle

| Field | Value |
|------------|------------|
| Component | Colors Cycle |
| Control Type | Knob Option |
| Label on the Panel | Colors |
| Values / States | Light, Medium, Heavy |
| Expected Action | Allows selection of the wash level for colored clothing |
| Acceptance Criteria | The system allows selection of only Light, Medium, or Heavy within Colors |

---

## Whites Cycle

| Field | Value |
|------------|------------|
| Component | Whites Cycle |
| Control Type | Knob Option |
| Label on the Panel | Whites |
| Values / States | Light, Medium, Heavy |
| Expected Action | Allows selection of the wash level for white clothing |
| Acceptance Criteria | When Whites is selected, the chosen level must be displayed and stored |

---

## Drain & Spin Cycle

| Field | Value |
|------------|------------|
| Component | Drain & Spin Cycle |
| Control Type | Knob Option |
| Label on the Panel | Drain & Spin |
| Values / States | Active / Inactive |
| Expected Action | Runs drain and spin without a full wash cycle |
| Acceptance Criteria | When this cycle starts, the system configures only the drain and spin stages |

---

## Speed Wash Cycle

| Field | Value |
|------------|------------|
| Component | Speed Wash Cycle |
| Control Type | Knob Option |
| Label on the Panel | Speed Wash |
| Values / States | Active / Inactive |
| Expected Action | Configures a quick wash cycle |
| Acceptance Criteria | The system applies the predefined duration and settings for Speed Wash |

---

## Delicates Cycle

| Field | Value |
|------------|------------|
| Component | Delicates Cycle |
| Control Type | Knob Option |
| Label on the Panel | Delicates |
| Values / States | Active / Inactive |
| Expected Action | Configures washing for delicate garments |
| Acceptance Criteria | The applied settings correspond to the Delicates profile |

---

## Casuals Cycle

| Field | Value |
|------------|------------|
| Component | Casuals Cycle |
| Control Type | Knob Option |
| Label on the Panel | Casuals |
| Values / States | Active / Inactive |
| Expected Action | Configures washing for casual clothing |
| Acceptance Criteria | The cycle is registered as Casuals before starting |

---

## Bulky Items Cycle

| Field | Value |
|------------|------------|
| Component | Bulky Items Cycle |
| Control Type | Knob Option |
| Label on the Panel | Bulky Items |
| Values / States | Active / Inactive |
| Expected Action | Configures washing for bulky items |
| Acceptance Criteria | The cycle is registered as Bulky Items before starting |

---

## Temperature Selector

| Field | Value |
|------------|------------|
| Component | Temperature Selector |
| Control Type | Rotary Knob |
| Label on the Panel | Temperature |
| Values / States | Tap Cold, Cold, Cool, Colors, Warm, Hot |
| Expected Action | Changes the water temperature |
| Acceptance Criteria | Only one temperature can be selected at a time |

---

## All Cold Rinses Option

| Field | Value |
|------------|------------|
| Component | All Cold Rinses Option |
| Control Type | Rule / Setting |
| Label on the Panel | All Cold Rinses |
| Values / States | Enabled / Disabled |
| Expected Action | Sets all rinse cycles to use cold water |
| Acceptance Criteria | When enabled, all rinses are performed with cold water regardless of the wash temperature |

---

## Deep Rinse

| Field | Value |
|------------|------------|
| Component | Deep Rinse |
| Control Type | Button |
| Label on the Panel | Deep Rinse |
| Values / States | Enabled / Disabled |
| Expected Action | Adds or intensifies the rinse cycle |
| Acceptance Criteria | When enabled, the visual state changes and the cycle configuration includes Deep Rinse |

---

## Start / Pause

| Field | Value |
|------------|------------|
| Component | Start / Pause |
| Control Type | Primary Button |
| Label on the Panel | Start / Pause |
| Values / States | Ready, Running, Paused, Completed |
| Expected Action | Starts, pauses, or resumes the cycle |
| Acceptance Criteria | If a valid configuration exists, Start begins the cycle; during execution, Pause temporarily stops the process |

---

## Wash Indicator

| Field | Value |
|------------|------------|
| Component | Wash Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Wash |
| Values / States | On / Off |
| Expected Action | Indicates that the wash phase is in progress |
| Acceptance Criteria | The indicator turns on exclusively during the Wash phase |

---

## Rinse Indicator

| Field | Value |
|------------|------------|
| Component | Rinse Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Rinse |
| Values / States | On / Off |
| Expected Action | Indicates that the rinse phase is in progress |
| Acceptance Criteria | The indicator turns on exclusively during the Rinse phase |

---

## Spin Indicator

| Field | Value |
|------------|------------|
| Component | Spin Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Spin |
| Values / States | On / Off |
| Expected Action | Indicates that the spin phase is in progress |
| Acceptance Criteria | The indicator turns on exclusively during the Spin phase |

---

## Lid Locked Indicator

| Field | Value |
|------------|------------|
| Component | Lid Locked Indicator |
| Control Type | Indicator Light |
| Label on the Panel | Lid Locked |
| Values / States | On / Off |
| Expected Action | Indicates that the lid is locked |
| Acceptance Criteria | It must remain on while the lid is locked and turn off only when it is safe to open |

---