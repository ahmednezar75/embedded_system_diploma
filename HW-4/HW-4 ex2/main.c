/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
int z;
int factorial(z)
{
	if (z==0)
	{
		return 1;
	}
	else
{
	return z*factorial(z-1);
	}
}
int main()
{
	int x;
	printf("enter a positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
printf("%d",factorial(x));
}
