/*
 ============================================================================
 Name        : Sentence_Reverse_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

char Sentence_rev(char str[] ,int);

int main(void) {

	char str[100];

	printf("Enter a sentence: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	int j,len,i;

	len = strlen(str);
	j = len;

	for(i = 0; i<len ;i++)
	{
		j--;
		printf("%c",Sentence_rev(str,j));
	}
	return EXIT_SUCCESS;
}
char Sentence_rev(char str[], int count)
{


	while(str[count] != '\0')
	{
		return str[count];
	}
}
