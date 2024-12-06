The Arduino code is connected to 3 IR sensors on : 
 
 ir sensor 1  in pin 4
 
 ir sensor 1  in pin 5 
 
 ir sensor 1  in pin 6    
 
 and connected to LED on :
 
 led 1 on pin 7
 
 led 1 on pin 12 
 
 led 1 on pin 9

. Configures the IR sensor pins as input (INPUT) to read their state.

. Configures the LED pins as output (OUTPUT) to control the LEDs.

. Initializes serial communication at 9600 baud (useful for debugging)

then :

. Reads the state of each IR sensor using digitalRead.

If the sensor detects an object, its state is likely LOW (depending on the sensor's logic).

If no object is detected, the state is HIGH.

If the sensor state is LOW (object detected), the corresponding LED turns on (HIGH).

If the sensor state is HIGH (no object detected), the corresponding LED turns off (LOW).

delay (100 ms)
