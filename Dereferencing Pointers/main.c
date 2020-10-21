#include <stdio.h>

int main(int argc, char** argv) {
	
	int age = 30;
	int *pAge = &age;
	
	printf("%d", *&*&age);
	
	return 0;
}





