/*
 ============================================================================
 Name        : Transpose_of_Matrix.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define rows  100
#define cols  100

int main(void) {

	int r,c,i,j;
	float arr[rows][cols],t[rows][cols];
	printf("Enter rows and column of matrix: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d",&r,&c);


	printf("Enter elements of matrix: \n");

	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		{
			printf("Enter element a%d%d: ",(i+1),(j+1));
			fflush(stdin);   fflush(stdout);
			scanf("%f",&arr[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for(i = 0 ; i < r ; i++)
	{
		for(j = 0 ; j < c ; j++)
		{
			printf("%.2f\t",arr[i][j]);
		}
		printf("\n");
	}

	if(i == j)
	{
		for(i = 0 ; i < r ; i++)
		{
			for(j = 0 ; j < c ; j++)
			{
				t[i][j] = arr[j][i];
			}
		}

		printf("Transpose of matrix: \n");
		for(i = 0 ; i < r ; i++)
		{
			for(j = 0 ; j < c ; j++)
			{
				printf("%.2f\t",t[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		for(i = 0 ; i < c ; i++)
				{
					for(j = 0 ; j < r ; j++)
					{
						t[i][j] = arr[j][i];
					}
				}
		printf("Transpose of matrix: \n");
		for(j = 0 ; j < c ; j++)
		{
			for(i = 0 ; i < r ; i++)
			{
				printf("%.2f\t",t[j][i]);
			}
			printf("\n");
		}
	}
	return 0;
}
