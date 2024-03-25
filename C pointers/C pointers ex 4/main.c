/*
 * main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ahmed
 */

#include "stdio.h"
int main() {
	int arr[15];
	int *ptr;
	int n;
	printf("enter number of elements in the array:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("input %d number of elements in the array\n",n);
	fflush(stdout);fflush(stdin);
	for (int i=0;i<n;i++)
	{
		printf("enter element-%d:",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&arr[i]);
	}
	ptr=&arr[n-1];
	for (int i=n;i>0;i--)
	{
		printf("element-%d is:%d\n",i,*ptr);
		ptr--;
	}

}
