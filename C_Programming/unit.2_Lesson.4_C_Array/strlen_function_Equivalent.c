/*
 ============================================================================
 Name        : strlen_function_Equivalent.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str[100];
	int no = 0, i = 0;

	printf("Enter a String: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	while(str[i] != 0)
	{
		no++;
		i++;
	}

	printf("Length of string: %d",no);
	return 0;
}
