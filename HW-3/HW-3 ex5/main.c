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
	int search;
	printf("enter no of elements:")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&num_elements);
	int elements[num_elements];

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
	printf("enter the element to be searched:")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);
	for(int k=0;k<num_elements;k++)
	{
		if(elements[k]==search)
		{
			printf("number found at location:%d",k+1);
		}
	}

}
