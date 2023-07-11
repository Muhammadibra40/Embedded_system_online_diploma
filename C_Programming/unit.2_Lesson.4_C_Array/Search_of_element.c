/*
 ============================================================================
 Name        : Search_of_element.c
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
		int n,i;

		printf("Enter no of elements : ");
		fflush(stdin);   fflush(stdout);
		scanf("%d",&n);

		for(i = 0 ; i < n ; i++)
		{
			fflush(stdin);   fflush(stdout);
			scanf("%f",&arr[i]);
		}

		printf("Enter the element to be searched : ");
		fflush(stdin);   fflush(stdout);
		scanf("%f",&num);

		for(i = 0 ; i < n ; i++)
		{
			if(arr[i] == num)
			{
				printf("Number found at the location = %d",i+1);
				break;
			}
			else
			{
				continue;
			}
		}

		if(i == n)
		{
			printf("Number is not found");
		}
	return 0;
}
