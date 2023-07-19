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

	int x;

	printf("Enter the number to get its factorial: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);



	printf("The factorial of %d = %d",x,fac(x));

	return EXIT_SUCCESS;
}

int fac(int a)
{
	if(a == 0)
	{
		return 0;
	}
	else if(a == 1)
	{
		return 1;
	}
	else
	{
		return a*fac(a-1);
	}
}
