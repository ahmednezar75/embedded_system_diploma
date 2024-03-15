/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */
#include <stdio.h>
#define area(r) 3.14*r*r
int main()
{
	int x;
	printf("Enter the radius:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x);
	printf("area=%.2f",area(x));

}

