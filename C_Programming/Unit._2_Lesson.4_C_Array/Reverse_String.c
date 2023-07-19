/*
 ============================================================================
 Name        : Reverse_String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[100],rev[100];
	int i,j;

	printf("Enter the string: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	for(i = 0 , j = strlen(str) - 1; i < strlen(str) && j >=0  ; i++,j--)
	{
		rev[j] = str[i];
	}

	printf("Reverse string is: %s",rev);
	return EXIT_SUCCESS;
}
