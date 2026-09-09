# UI Washer Architecture

The washer user interface shall provide cycle selection controls, temperature selection controls, option controls, command buttons, status indicators, and a user interface circuit.

# Washer Configuration Sequence
The system shall allow the user to configure a wash cycle by selecting a cycle profile, selecting a water temperature, selecting available cycle options, and then issuing a Start command.




# UI Washer (Scope)
Scope: user interface subsystem of the washer. Covers cycle selection, temperature selection, cycle options, command buttons, and status indicators. Parent customer requirement: HLS / UI Washer.

# UI Washer / Heavy Whites
The system shall allow the user to select the Heavy Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Heavy Whites before the wash cycle starts.

# UI Washer / Medium Whites
The system shall allow the user to select the Medium Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Medium Whites before the wash cycle starts.

# UI Washer / Light Whites
The system shall allow the user to select the Light Whites cycle using the control panel knob, and when selected, the system shall register the cycle as Light Whites before the wash cycle starts.

# UI Washer / Heavy Colors
The system shall allow the user to select the Heavy Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Heavy Colors before the wash cycle starts.

# UI Washer / Medium Colors
The system shall allow the user to select the Medium Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Medium Colors before the wash cycle starts.

# UI Washer / Light Colors
The system shall allow the user to select the Light Colors cycle using the control panel knob, and when selected, the system shall register the cycle as Light Colors before the wash cycle starts.

# UI Washer / Tap Cold Temperature
The system shall allow the user to select the Tap Cold temperature option using the temperature selector knob, and when selected, the system shall register Tap Cold as the active temperature setting before the wash cycle starts.

# UI Washer / Cold Temperature
The system shall allow the user to select the Cold temperature option using the temperature selector knob, and when selected, the system shall register Cold as the active temperature setting before the wash cycle starts.

# UI Washer / Cool Temperature
The system shall allow the user to select the Cool temperature option using the temperature selector knob, and when selected, the system shall register Cool as the active temperature setting before the wash cycle starts.

# UI Washer / Colors Temperature
The system shall allow the user to select the Colors temperature option using the temperature selector knob, and when selected, the system shall register Colors as the active temperature setting before the wash cycle starts.

# UI Washer / Warm Temperature
The system shall allow the user to select the Warm temperature option using the temperature selector knob, and when selected, the system shall register Warm as the active temperature setting before the wash cycle starts.

# UI Washer / Hot Temperature
The system shall allow the user to select the Hot temperature option using the temperature selector knob, and when selected, the system shall register Hot as the active temperature setting before the wash cycle starts.

# UI Washer / Button
The system shall provide user command buttons for dryer operation, including Start/Pause and Deep Rinse functions, and shall allow only one valid command input to be processed per button actuation.
Shall have 2 buttons Start and Deep Rinse / Extra Spin

# UI Washer / Indicatiors
The system shall provide status indicators to communicate washer operating conditions and cycle status information, and only the indicators associated with the current operating state shall be active.
Shall be 5 LEDs Indicators (Deep Rinse [ON],Wash,Spin, Lid Locked, Rinse)

# UI Washer / MC Communications
The system shall provide a communication interface between the Washer User Interface and the Washer Main Control to support transmission of user selections, status information, and command signals.
Shall be a circuit to communicating with MC Board