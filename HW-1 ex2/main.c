/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main()
{
	int x;
	printf ("enter a value:");
	fflush (stdin); fflush (stdout);
	scanf ("%d",&x);
	printf ("you entered: %d",x) ;
}
