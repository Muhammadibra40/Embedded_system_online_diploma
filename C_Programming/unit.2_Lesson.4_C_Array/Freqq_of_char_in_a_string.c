/*
 ============================================================================
 Name        : Freqq_of_char_in_a_string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(void) {

	char str[100],ch;
	int i,freq = 0;

	printf("Enter a string: ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	printf("Enter a character to find its frequency: ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&ch);

	for(i = 0 ; i < strlen(str) ; i++)
	{
		if(str[i] == ch)
		{
			freq++;
		}
		else
		{
			continue;
		}
	}


	printf("Frequency of %c = %d",ch,freq);
	return 0;
}
