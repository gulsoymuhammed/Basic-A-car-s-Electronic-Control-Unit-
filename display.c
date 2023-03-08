#include "display.h" 
#include <stdio.h>
#include <stdint.h>

void display_initialize(void)
{
	printf("System Initialized \n");
}

void display_write_to_screen(float num)
{
	printf("------------------------\n \n");
	printf("VOLTAGE = %.2f \n", num);
}