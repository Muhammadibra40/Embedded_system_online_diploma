/*
 ============================================================================
 Name        : Insertion_of_element.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float arr[20],num;
	int n,i,loc;

	printf("Enter no of elements : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);

	for(i = 0 ; i < n ; i++)
	{
		fflush(stdin);   fflush(stdout);
		scanf("%f",&arr[i]);
	}

	printf("Enter the element to be inserted : ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&num);

	printf("Enter the location : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&loc);

	for(i = n-1 ; i > loc-2 ; i--)
		{
			arr[i+1] = arr[i];
		}

	arr[loc-1] = num;

	for(i = 0 ; i < n+1 ; i++)
		{
			printf("%.2f ",arr[i]);
		}
	return EXIT_SUCCESS;
}
