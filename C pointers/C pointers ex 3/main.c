/*
 * main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ahmed
 */

#include "stdio.h"
#include "string.h"
int main() {
	char arr[100];
	printf("enter a string:");
	fflush(stdout);fflush(stdin);
	gets(arr);
	char *ptr;
	int y=strlen(arr);
		ptr=&arr[y-1];
	for (int i=0;i<y;i++)
		{
		printf("%c",*ptr);
			ptr--;
		}


}
