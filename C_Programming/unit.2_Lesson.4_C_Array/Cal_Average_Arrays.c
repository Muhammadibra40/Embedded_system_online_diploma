/*
 ============================================================================
 Name        : Cal_Average_Arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i;
	float arr[100],sum = 0;
	printf("Enter the number of data: ");
	fflush(stdin);    fflush(stdout);
	scanf("%d",&n);

	for(i = 0 ; i < n ; i++)
	{
		printf("%d. Enter number: ",(i+1));
		fflush(stdin);  fflush(stdout);
		scanf("%f",&arr[i]);
	}

	for(i = 0 ; i <= n ; i++)
		{
			sum+=arr[i];
		}

	printf("Average = %.2f",(sum/n));

	return EXIT_SUCCESS;
}
