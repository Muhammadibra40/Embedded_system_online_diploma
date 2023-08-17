/*
 ============================================================================
 Name        : write_output_of_program.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//output to be size of union = 32 as the the union anly allocates the max variable size
//output to be size of structure = 40 as the the structure allocates memory for all the members of the structure


#include <stdio.h>
#include <stdlib.h>

union UNUMexp
{
	char arr[32];
	float x;
	int y;
}UNUMVar;

struct Sexp
{
	char arr[32];
	float x;
	int y;
}SVar;

int main(void) {


	printf("size of union = %d\n",sizeof(UNUMVar));
	printf("size of structure = %d",sizeof(SVar));
	return EXIT_SUCCESS;
}
