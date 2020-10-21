#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int age = 30;
	double gpa = 3.3;
	char grade  = 'A';
	int *pAge = &age;
	double *pGpa = &gpa;
	char *pGrade = &grade;

	printf("age's memory address is: %p\n", &age); //Putting '%p' in the sentence is a pointer
	return 0;
}





