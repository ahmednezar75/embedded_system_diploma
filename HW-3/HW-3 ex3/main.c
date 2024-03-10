/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "Stdio.h"
void main()
{
	int x[2][3];
	int y[2][3];
	int r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("enter the item(%d,%d):\n",r,c);
			fflush(stdin); fflush(stdout);
			scanf("%d",&x[r][c]);

		}
	}
	printf("the matrix is:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d\t",x[r][c]);

		}
		printf("\n");
	}
	printf("the transpose matrix is:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<2;c++)
		{
			y[r][c]=x[c][r];
			printf("%d\t",y[r][c]);
		}
		printf("\n");
	}

}
