/*
 * main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ahmed
 */
#include "stdio.h"
struct Sdata{
	char name[100];
	int ID;
};



int main() {
	struct Sdata first ={"alex",1002};
	struct Sdata second ={"aly",1003};
	struct Sdata third ={"ahmed",1004};
	struct Sdata* ptr1=&first;
	struct Sdata* ptr2=&second;
	struct Sdata* ptr3=&third;

	struct Sdata* arr[]={ptr1,ptr2,ptr3};
printf("employee name=%s\n",(*arr)->name);
printf("employee ID=%d\n",(*arr)->ID);
}
