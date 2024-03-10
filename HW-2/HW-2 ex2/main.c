/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main() {
	char x;
	printf("enter an alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c", &x);
	if (x=='a'|| x=='A'|| x=='e'|| x=='E'|| x =='I'|| x=='i'|| x=='o'|| x=='O'|| x=='u'|| x=='U')
	{
		printf("%c is alphabet",x);
	}
	else
	{
			printf("%c is not alphabet",x);
	}


}
