/*
 ============================================================================
 Name        : info_Of_10_tudents.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Sdata
{
	char name[20];
	float mark;

}students[10];

int main(void) {

	int i;

	printf("Enter information of the students: \n");

	for(i = 0; i < 10; i++)
	{

		printf("For roll number %d\n",(i+1));

		printf("Enter name: ");
		fflush(stdin);  fflush(stdout);
		gets(students[i].name);

		printf("Enter mark: ");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&students[i].mark);
	}


	printf("\nDisplaying Information\n");

	for(i = 0 ; i < 10 ; i++)
	{
		printf("Information For roll number %d:\n",(i+1));
		printf("name: %s\n",students[i].name);
		printf("Marks: %.2f\n",students[i].mark);
	}


	return EXIT_SUCCESS;
}
