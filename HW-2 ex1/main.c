/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main() {
	int x;
	printf("enter an integer you want to check:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &x);
	((x % 2) == 0) ?printf("%d is even", x) :printf("%d is odd", x);

}
