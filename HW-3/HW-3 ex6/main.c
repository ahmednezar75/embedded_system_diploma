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
	char find;
	int count=0;
	printf("enter a string:\n");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("enter a character to find frequency:\n");
		fflush(stdin);fflush(stdout);
    scanf ("%c",&find);
	for (int i=0;text[i]!='\0';i++)
	{
		if (text[i]==find)
			count++;
	}
	printf("%d",count);
}
