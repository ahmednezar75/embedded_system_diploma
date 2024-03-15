/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */

#include "stdio.h"
struct distance
{
	int feet;
	float inch;
};

int main()
{
	struct distance x,y,sum;
	printf("enter information of first distance\n");
	printf("Enter feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x.feet);
	printf("Enter inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x.inch);
	printf("enter information of second distance\n");
	printf("Enter feet:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &y.feet);
	printf("Enter inch:");
	fflush(stdin);fflush(stdout);
	scanf("%f", &y.inch);
	sum.feet=x.feet+y.feet;
	sum.inch=x.inch+y.inch;
	if (sum.inch>=12.0)
	{
		sum.feet ++;
		sum.inch-=12.0;
	}
	printf("sum of distance=%d' -%.1f\"\n",sum.feet,sum.inch);
}
