/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "Stdio.h"

void main()
{
	int x;
	float sum;
	float average;
	printf("enter number of data:\n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	float y[x];
	for (int i=0;i<x;i++)
	{
		printf("%d. enter number:\n",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&y[i]);
	}
	for (int i=0;i<x;i++)
	{
		sum += y[i];

	}
	average =sum/x;
	printf("average=%.2f\n",average);

}
