/*
 ============================================================================
 Name        : studentInformationUsingStructures.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student
{
	char name[20];
	int rollNum;
	float mark;

}Sdata;

int main(void) {

	Sdata student;

	printf("Enter information of the student: \n");

	printf("Enter name: ");
	fflush(stdin);  fflush(stdout);
	gets(student.name);

	printf("Enter roll number: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&student.rollNum);

	printf("Enter mark: ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&student.mark);

	printf("\nDisplaying Information\n");

	printf("name: %s\n",student.name);
	printf("Roll: %d\n",student.rollNum);
	printf("Marks: %.2f\n",student.mark);


	return EXIT_SUCCESS;
}
