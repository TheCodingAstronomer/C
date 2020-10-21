#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int secretNum = 5; //Initiating the secret number
	int guess; //The user's guess
	int limit = 3; //Guess limit
	int guessCount = 0; //Guess tracker
	int outOfGuesses = 0;
	
	
	while(guess != secretNum && outOfGuesses == 0){ //So that it until the user enters the right number the program repeats itself
		if (limit > guessCount){
			printf("Enter a number: ");
			scanf("%d", &guess);
			guessCount++;
		}
		else {
			outOfGuesses = 1;
		}
	}
	if (outOfGuesses == 0){
		printf("You Win!"); //If the user enters the right it breaks out of the loop and prints a statement
	} else {
		printf("You Lose!");
	}
	
	return 0;
}




