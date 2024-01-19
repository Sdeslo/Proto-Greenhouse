# Proto-Greehouse
Arduino scripts to prototype the automatisation of a greenhouse

Calibration of moisture sensors:      
The range of values of your sensor depends on the number of bit of its analog signal. The dry variable is the value indicated in the serial monitor when the sensor is dry. The wet variable is the value indicated in the serial monitor when the sensor is immerged in water. These variables represent your maximum and minimum values(100% and 0%). Begin the calibration by compiling and flashing the code to the arduino (or others). Make sure the sensor is dry and open the serial monitor. Replace the dry value by the maximum value shown in the serial monitor. Submerge the sensor in water and replace the wet value by the minimum value shown in the serial monitor. 

I2C Scanner:
I2C scanner is a tool used to find the I2C adress of components who use I2C for communication. The default adress is 27 but it is not always the case. Connect the component you want to test in the appropriate GPIO pins of the board (A4 and A5 for Arduino UNO), compile and flash the code and open the serail monitor. A scan for a I2C adress will happen every second. Only the LCD display is using I2C for now.
