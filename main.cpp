#include <stdio.h>
#include <iostream>

int main() {
	// Input word
	char n[100];
	const char guess_this_word[8] = "hangman"; // Use char c-string
	char guessed_word[8] = "_______";
	while(strcmp(guessed_word, guess_this_word) != 0){
		std::cout << "The word is: " << guessed_word << std::endl;
		std::cout << "Enter a character to guess: ";
		std::cin.getline(n, 50);
		while (strlen(n) > 1) {
			std::cout << strlen(n) << std::endl;
			std::cout << "You input more than a character. Please re-input: ";
			std::cin.getline(n, 50);
		}

		// Check if input char in the word
		int i = 0;
		char before_guess[8];
		strcpy_s(before_guess, guessed_word);
		while (guess_this_word[i] != '\0') {
			if (n[0] == guess_this_word[i]) {
				guessed_word[i] = n[0];
			}
			i++;
		}
		if (strcmp(before_guess, guessed_word) == 0) {
			std::cout << "You are one step closer to die" << std::endl;
		}
		std::cout << "The characters guessed so far: " << guessed_word << std::endl;
	}
	
	
	// If present, get the index in guess_this_word array
	// for i=1, i < strlen(guessed_word), i++ , loop length of the word
	// if guessed_word[i] == n
	// array index_store, store current i
	// get length of index_store, loop, and assign guessed_word[item in index_store]
	//  
	// 
	// 
	// Think about case with multiple same characters in word
	// 
	// 
	// 
	// How to display the current status of guessed words?
	// print guessed_word?
	

}