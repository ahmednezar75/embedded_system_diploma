/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
int main()
{
	char x;
	printf("enter a character:")	;
		fflush(stdin);fflush(stdout);
		scanf("%c",&x);
		if (x>65 && x<122) //between the ascii of a and z
		{
			printf("%c is an alphabet",x);
		}
		else
		{
			printf("%c is not an alphabet",x);
		}

}
