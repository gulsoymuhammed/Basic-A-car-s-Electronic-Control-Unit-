#include "sensor.h"  
#include <stdio.h>
#include <stdint.h>

float voltage_values[12] = { 1.8,2.2,2.5,2.7,3.8,0.3,4.5,2.4,9,0.1,1.9,5.2 };

float sensor_get_voltage_value(void)
{
	static int32_t counter = 0; // the counter should not change outside the scope
	float temp = 0;

	temp = voltage_values[counter];
	counter++;

	if (12 == counter) counter = 0;

	return temp;
}



