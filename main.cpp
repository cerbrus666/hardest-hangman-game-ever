#include <stdio.h>
#include <iostream>

int main() {
	// Input word & constants
	char n[100];
	const char guess_this_word[8] = "hangman"; // Use char c-string
	char guessed_word[8] = "_______";
	int die = 0;
	while (strcmp(guessed_word, guess_this_word) != 0) {
		// Need to think how to handle capital char cases
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
			die++;
		}
		std::cout << "The characters guessed so far: " << guessed_word << std::endl;
		if (die > 5) {
			std::cout << "The guy was hanged" << std::endl;
			std::cout << "You let the man died" << std::endl;
			std::cout << "You're a murderer" << std::endl;
			return 0;
		}
		if (strcmp(guessed_word, guess_this_word) == 0) {
			std::cout << "You saved the guy" << std::endl;
			std::cout << "You're a hero, congratulations" << std::endl;
			return 0;
		}
	}

}