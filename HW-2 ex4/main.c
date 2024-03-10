/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include <stdio.h>
void main()
{
float x;
printf("enter a number:");
fflush(stdin);fflush(stdout);
scanf("%f",&x);
if (x>0)
{
	printf("%.2f is positive",x);
	}
else if (x<0)
{
	printf("%.2f is negative",x);
	}
else
{
	printf("you entered a zero");
}
}
