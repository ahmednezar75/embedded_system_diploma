/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"

int try(int x,int y)
{
	if (y!=0)
	{
	return x*try(x,y-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int base;
	int power;
	printf("enter a base number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	printf("enter a power number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	printf("%d ^ %d = %d",base,power,try(base,power));


}
