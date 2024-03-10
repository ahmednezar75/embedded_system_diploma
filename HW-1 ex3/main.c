/*

 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
void main()
{
	int x,y,sum;
	printf ("enter two value:");
	fflush (stdin); fflush (stdout);
	scanf ("%d %d",&x,&y);
	sum=x+y;
	printf ("sum=%d",sum) ;
}
