/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "stdio.h"
int main()
{
	int num_elements, i;
	int insert,location;
	printf("enter no of elements:")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_elements);
	int elements[100];

	printf("Enter the elements: ");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < num_elements; i++)
	{
		scanf("%d", &elements[i]);
	}

	printf("The elements are: ");
	fflush(stdin);fflush(stdout);
	for (i = 0; i < num_elements; i++)
	{
		printf("%d ", elements[i]);
	}
	printf("\n");
	printf("enter the element to be inserted:\n")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&insert);
	printf("enter the location:")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
for (int k=0;k<num_elements;k++)
{
	if(k==location-1)
	{
		printf("%d\t",insert);
		printf("%d\t",elements[k]);
	}
	else
		printf("%d\t",elements[k]);
	}

}
