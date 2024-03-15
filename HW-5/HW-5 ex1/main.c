/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */


#include "stdio.h"
struct information
{
	char names[100];
	int roll;
	float marks;
};

int main()
{
	struct information x;
	printf("enter information of student\n");
	printf("Enter name:");
	fflush(stdin);fflush(stdout);
	scanf("%s", &x.names);
	printf("Enter roll number:");
	fflush(stdin);fflush(stdout);
	scanf("%d", &x.roll);
	printf("Enter marks number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x.marks);
	printf("displaying information\n");
	printf("name:%s \n",x.names);
	printf("roll:%d \n",x.roll);
	printf("marks:%.2f \n",x.marks);

}
