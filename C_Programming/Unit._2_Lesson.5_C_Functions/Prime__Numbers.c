/*
 ============================================================================
 Name        : Prime__Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime_num(int ,int);

int main(void) {

	int start,end;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&start,&end);

	printf("Prime numbers between %d and %d are: ",start,end);

	prime_num(start,end);

	return EXIT_SUCCESS;
}
void prime_num(int a, int b)
{
	int i,check;
	for(i=a ; i<=b ; i++)
	{
		for(check = 2 ; check<=9 ; check++)
		{
			if(i%check == 0)
			{
				break;
			}
			else
			{
				//DO NOTHING
			}
			if(check == 9)
			{
				printf("%d ",i);
			}
			else
			{
				//DO NOTHING
			}
		}
	}
}
