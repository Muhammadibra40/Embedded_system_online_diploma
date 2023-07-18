/*
 ============================================================================
 Name        : Factorial_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fac(int a);

int main(void) {

	int x,t;

	printf("Enter the number to get its factorial: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	t = fac(x);

	printf("The factorial of %d = %d",x,t);

	return EXIT_SUCCESS;
}

int fac(int a)
{
	int result = 1;
	while(a>0)
	{
		result *= a;
		a--;
		fac(a);
	}
	return result;
}
