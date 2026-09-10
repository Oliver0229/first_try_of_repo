# UI Dryer Architecture
The dryer user interface shall provide a cycle selector, temperature selector, timer control, user command buttons, status indicators, and a user interface circuit.

# Dryer Configuration Sequence
The system shall allow the user to configure a drying cycle by selecting a cycle profile, selecting a temperature setting, selecting a timer setting when applicable, and then issuing a Start command.




# UI Dryer / Button
The system shall provide user command buttons for dryer operation, including Start/Pause and E-Dry functions, and shall allow only one valid command input to be processed per button actuation.
Shall have 2 buttons, for Start and E-Dry.

# UI Dryer / Indicators
The system shall provide status indicators to communicate dryer operating conditions and cycle status information, and only the indicators associated with the current operating state shall be active.
Shall be 4 LEDs Indicators.

# UI Dryer / Buzzers
The system shall provide an audible notification device for dryer user interaction and status indication, and the buzzer shall be available for operation during supported dryer events.
Shall be have a circuit to manage a Buzzer.

# UI Dryer / MC Communications
The system shall provide a communication interface between the Dryer User Interface and the Dryer Main Control to support transmission of user selections, status information, and command signals.