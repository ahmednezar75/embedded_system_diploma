/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main()
{
	float x,y,product;
	printf ("enter two value:");
	fflush (stdin); fflush (stdout);
	scanf ("%f %f",&x,&y);
	product=x*y;
	printf ("product=%f",product) ;
}
