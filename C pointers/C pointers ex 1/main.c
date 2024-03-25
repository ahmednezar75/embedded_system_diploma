/*
 * main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ahmed
 */



#include <stdio.h>

int main() {
	int m=29;
	int *ab;
	printf("address of m is:%p\n",&m);
	printf("value of m is:%d\n",m );
	ab=&m;
	printf("address of ab is:%p\n",ab);
	printf("value of ab is:%d\n",*ab );
	m=34;
	printf("address of ab is:%p\n",ab);
	printf("value of ab is:%d\n",*ab );
	*ab=7;
	printf("address of m is:%p\n",ab);
	printf("value of m is:%d\n",*ab );
}

