/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
#include "string.h"
int main()
{
	char x[100];
	char z[100];
	int y;
	printf("enter a string:")	;
	fflush(stdin);fflush(stdout);
	gets(x);
	y=strlen(x);
	for(int i=0;i<y;i++)
	{
		z[y-i-1]=x[i];
	}
	z[y]=0;
	printf("%s",z);
}
