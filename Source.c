#define _CRT_SECURE_NO_WARNINGS
//MUHAMMED GÜLSOY
//2200000005



//these are our files that we use
#include <stdio.h>
#include <stdint.h>  
#include "display.h" 
#include<stdlib.h>
#include"motor.h"
#include"sensor.h"




// Function Prototypes 
void delay(void);





//main programme
int main(int argc, char* argv[])
{
	display_initialize();           

	while (1)
	{
		//geting number from sensor.c 
		float temp = sensor_get_voltage_value();
		display_write_to_screen(temp);

		//check the position of the car and give a response for it
		if (temp < 2)
		{
			smallerThanTwo();
		}
		else if(temp>3)
		{
			biggerThanThree();
		}
		else {
			betweenNumbers();
		}
		delay();
	}
	return 0;
}

//output timing function
void delay()
{
	int64_t t = 0;
	for (t = 0; t < 800000000; t++)
	{
	}
}
