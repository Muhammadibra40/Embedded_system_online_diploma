/*
 ============================================================================
 Name        : Power_Of_Number_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int power(int , int);

int main(void) {

	int base,pow;

	printf("Enter base number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number(positive integer): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&pow);

	power(base,pow);

	printf("%d^%d = %d",base,pow,power(base,pow));

	return 0;
}
int power(int a, int b)
{
	if(a == 0 && b != 0)
	{
		return 0;
	}
	else if(a == 1 || b == 0)
	{
		return 1;
	}
	else
	{
		return a*power(a,(b-1));
	}
}
