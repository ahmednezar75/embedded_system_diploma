/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */



#include "stdio.h"
void main()
{
	char x;
	printf ("enter a character:");
	fflush (stdin); fflush (stdout);
	scanf ("%c",&x);
	printf ("ASCII value of %c = %d",x,x) ;
}
