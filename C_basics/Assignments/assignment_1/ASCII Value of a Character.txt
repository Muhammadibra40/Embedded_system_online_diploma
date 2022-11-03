/*
 ============================================================================
 Name        : EX_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	        char i;
	        printf("enter A character : ");
			fflush(stdin);  fflush(stdout);
			scanf("%c",&i);
			printf("ASCII value of %c = %d",i,i);
	return EXIT_SUCCESS;
}
