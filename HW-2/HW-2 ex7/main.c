/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
int main()
{
	int x;
	printf("enter an integer:")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int fact=x;
	if (x<0)
	{
		printf("Error!! factorial of negative doesn't exist");
	}
	else if(x==1 || x==0)
	{
		printf("factorial=1");

	}
	else
	{
		for(int i=1;i<x;i++)
		{
			fact*=(x-i);
		}
		printf("factorial=%d",fact);
	}
}
