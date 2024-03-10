/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main()
{
int x,sum,i;
printf ("enter an integer:");
fflush(stdin); fflush(stdout);
scanf("%d",&x);
for(i=1,sum=0;i<=x;i++)
{
	sum+=i;
	}
printf("sum=%d",sum);
}
