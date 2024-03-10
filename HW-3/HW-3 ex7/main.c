/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "Stdio.h"
#include "string.h"
void main()
{
	char text[100];
	int count=0;
	printf("enter a string:\n");
	fflush(stdin);fflush(stdout);
	gets(text);
	for (int i=0;text[i]!='\0';i++)
	{
			count++;
	}
	printf("%d",count);
	}
