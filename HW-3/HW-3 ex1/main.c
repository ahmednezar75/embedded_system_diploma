/*
 * main.c
 *
 *  Created on: Mar 10, 2024
 *      Author: ahmed
 */


#include "Stdio.h"
void main()
{
	float x [2][2];
	float y [2][2];
	float z [2][2];
	printf ("enter all element of first matrix:\n");
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
		printf("enter x[%d][%d]:\n",r+1,c+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&x[r][c]);
		}
	}
	printf ("enter all element of second matrix:\n");
	for(int r=0;r<2;r++)
		{
			for(int c=0;c<2;c++)
			{
			printf("enter y[%d][%d]:\n",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&y[r][c]);
			}
		}
	printf ("the sum of matrix:\n");
	for(int r=0;r<2;r++)
			{
				for(int c=0;c<2;c++)
				{
				z[r][c]=x[r][c]+y[r][c];
				printf("%.f\t",z[r][c]);
				}
				printf("\n");
			}

}
