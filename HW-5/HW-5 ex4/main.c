/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */
#include <stdio.h>
struct information
{
	char names[100];
	float marks;
};

int main()
{
	struct information x[100];
	printf("enter information of student\n");
	for (int i=0;i<10;i++)
	{
		printf("for roll number %d\n",i+1);
		printf("Enter name:");
		fflush(stdin);fflush(stdout);
		scanf("%s", &x[i].names);
		printf("Enter marks number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f", &x[i].marks);

	}
	printf("displaying information\n");
	for (int i=0;i<10;i++)
	{
		printf("for roll number %d\n",i+1);
		printf("name:%s \n",x[i].names);
		printf("marks:%.2f \n",x[i].marks);
	}
}

