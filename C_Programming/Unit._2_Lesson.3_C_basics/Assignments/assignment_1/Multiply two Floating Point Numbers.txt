/*
 ============================================================================
 Name        : EX_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	    float num1,num2,result;
		printf("enter TWO numbers : ");
		fflush(stdin);  fflush(stdout);
		scanf("%f %f",&num1,&num2);
		result = num1*num2;
		printf("product: %f ",result);
	return EXIT_SUCCESS;
}
