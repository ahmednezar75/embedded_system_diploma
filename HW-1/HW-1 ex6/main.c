/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */



#include "stdio.h"
void main()
{
	float a,b;
	printf ("enter the value of a:");
	fflush (stdin); fflush (stdout);
	scanf ("%f",&a);
	printf ("enter two value of b:");
	fflush (stdin); fflush (stdout);
	scanf ("%f",&b);
	printf ("after swap value of a=%.2f\nvalue of b=%.2f",b,a) ;
}
