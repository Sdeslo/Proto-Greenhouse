# Proto-Greehouse
Arduino scripts to prototype the automatisation of a greenhouse

Calibration of moisture sensors:      
The range of values of your sensor depends on the number of bit of its analog signal. The dry variable is the value indicated in the serial monitor when the sensor is dry. The wet variable is the value indicated in the serial monitor when the sensor is immerged in water. These variables represent your maximum and minimum values(100% and 0%). Begin the calibration by compiling and flashing the code to the arduino (or others). Make sure the sensor is dry and open the serial monitor. Replace the dry value by the maximum value shown in the serial monitor. Submerge the sensor in water and replace the wet value by the minimum value shown in the serial monitor. 
