# Proto-Greehouse
Arduino scripts to prototype the automatisation of a greenhouse

Calibration of moisture sensors:      
The range of values of your sensor depends depends on the number of bits of its analog signal. First, temporarily remove the percentageHumidity variable. Temporarily replace the "Serial.print(percentageHumidity)" and "Serial.println("%")" lines by "Serial.println(analogRead(A0)" (A0 in this case because the sensor was connected to the analog pin 0). The dry variable is the value indicated in the serial monitor when the sensor is dry. The wet variable is the value indicated in the serial monitor when the sensor is immerged in water. These variables represent your maximum and minimum values(100% and 0%).
