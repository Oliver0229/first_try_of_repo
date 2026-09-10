# Estrcuture ofthe requirements

- arquitectura
- comportamiento interno
- diagnósticos
- secuencias
- seguridad
- validaciones
- transición de estados

1. Arquitectura

Describe qué elementos existen y cómo se relacionan.

Ejemplo:
1
The dryer user interface shall provide a cycle selector knob, temperature selector, status indicators, and option buttons.
o
1
The washer user interface shall provide user controls for cycle selection, temperature selection, cycle options, and cycle status indication.
No describe comportamiento.
Describe la composición.

---

2. Comportamiento Interno
Describe qué ocurre dentro del sistema después de una acción.
Ejemplo:
Tu compañero tiene:
1
The system shall allow the user to select the Delicates cycle.

Comportamiento:
1
The system shall configure the cycle parameters associated with the Delicates profile when the Delicates cycle is selected.

o
1
The system shall store the selected cycle until modified by the user.

---
3. Diagnósticos
Describe detección de fallas.
Ejemplos UI:
1
The system shall indicate a user interface fault condition when a control input is unavailable.
Show more lines
1
The system shall indicate a cycle configuration error to the user.
2
Ejemplos más típicos de sistema:
1
The system shall detect a failed temperature selector input.
Show more lines
1
The system shall detect loss of communication between the user interface and control board.

4. Secuencias
Describe el orden de acciones.
Ejemplo:
1
User selects cycle
2
↓
3
User selects temperature
4
↓
5
User selects options
6
↓
7
User presses Start
8
↓
9
Cycle begins
Show more lines
Convertido a requirement:
1
The system shall accept cycle start only after the cycle configuration has been completed.
Show more lines
Otro:
1
The system shall enter the drying cycle after a valid cycle and temperature selection have been made.

5. Seguridad

Protecciones.
Ejemplo Dryer:
1
The dryer shall prevent cycle start when the door is open.
Show more lines
Ejemplo Washer:
1
The washer shall prevent spin operation when the lid is unlocked.
Show more lines
Sigue siendo High Level Requirement.

6. Validaciones

Verificar que una acción sea válida.
Ejemplo:
1
The system shall accept only one temperature selection at a time.
Show more lines
De hecho ya tienen algunos así.
Otro ejemplo:
1
The system shall maintain only one active cycle selection at a time.
2
Show more lines
o
1
The system shall reject invalid cycle selector positions.
7. Transición de Estados

Esto es algo muy usado en sistemas embebidos.
Por ejemplo:
Dryer
Plain Text
1
Idle
2
↓
3
Configured
4
↓
5
Running
6
↓
7
Paused
8
↓
9
Completed
Show more lines
Requirement:
1
The system shall transition from Idle to Running when a valid cycle configuration is started.
Show more lines
o
1
The system shall transition from Running to Paused when the Pause button is pressed.