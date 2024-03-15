/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */


#include "stdio.h"
struct numbers
{
	float real ;
	float imj;
};
struct numbers add(struct numbers x,struct numbers y)
{
	struct numbers z;
	z.real=x.real+y.real;
	z.imj=x.imj+y.imj;
	return z;
}
int main()
{
	struct numbers a,b,sum;
	printf("enter real and imaginary respectively for 1st complex:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &a.real,&a.imj);
	printf("enter real and imaginary respectively for 2st complex:\n");
	fflush(stdin);fflush(stdout);
	scanf("%f%f", &b.real,&b.imj);
	sum=add(a,b);
	printf("Sum of complex numbers: %.1f + %.1fi\n", sum.real, sum.imj);
}
