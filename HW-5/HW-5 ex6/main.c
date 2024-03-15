/*
 * main.c
 *
 *  Created on: Mar 14, 2024
 *      Author: ahmed
 */


#include <stdio.h>
union job
{
	char  name[32];
	float salary;
	int worker_no;
};
struct job1
{
	char  name[32];
	float salary;
	int worker_no;
};

int main()
{
	struct job1 s;
	union job u;
	printf("size of union =%d\n",sizeof (u));
	printf("size of structure =%d",sizeof (s));

}
