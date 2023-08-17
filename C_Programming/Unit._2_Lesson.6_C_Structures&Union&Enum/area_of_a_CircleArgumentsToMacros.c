/*
 ============================================================================
 Name        : area_of_a_CircleArgumentsToMacros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define area(r) 3.14*r*r

int main(void) {

	float rad;

	printf("Enter the radius: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&rad);

	printf("Area = %.2f",area(rad));

	return EXIT_SUCCESS;
}
