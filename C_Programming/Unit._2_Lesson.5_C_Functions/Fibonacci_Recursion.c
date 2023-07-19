/*
 ============================================================================
 Name        : Fibonacci_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long long int fib(int );

int main(void) {

	int num;

	printf("Enter an integer number to get its Fibonacci: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&num);

	printf("The Fibonacci of %d = %llu",num,fib(num));


	return 0;
}
unsigned long long int fib(int a)
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
		return fib(a-1)+fib(a-2);
	}
}
