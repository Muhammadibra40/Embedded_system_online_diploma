/*
 ============================================================================
 Name        : Sentence_Reverse.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void rev(char str[], int n);

int main(void) {

	char str[100];
	int len;

	printf("Enter a sentence: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	len = strlen(str);

	rev(str, len);

	printf("%s",str);

	return 0;
}

void rev(char str[], int n)
{
	char temp[100];
	int i,j;

	for(i = 0,j = n - 1 ; i<n && j>=0 ; i++,j--)
	{
		temp[j] = str[i];
	}
	for(i=0; i<n ;i++)
	{
		str[i] = temp[i];
	}

	return;
}
