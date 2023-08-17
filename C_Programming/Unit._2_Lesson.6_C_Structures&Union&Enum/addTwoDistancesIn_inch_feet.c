/*
 ============================================================================
 Name        : addTwoDistancesIn_inch_feet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct distance
{
	int feet;
	float inch;
}Sdistance;

int main(void) {

	Sdistance distance1,distance2,result;

	printf("Enter information for 1st distance: \n");

	printf("Enter feet: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&distance1.feet);

	printf("Enter inch: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&distance1.inch);

	printf("\nEnter information for 2nd distance: \n");

	printf("Enter feet: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&distance2.feet);

	printf("Enter inch: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&distance2.inch);

	result.feet = distance1.feet + distance2.feet;
	result.inch = distance1.inch + distance2.inch;

	while(result.inch >= (float)12)
	{
		result.feet++;
		result.inch -= (float)12;

	}

	printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
	return EXIT_SUCCESS;
}
