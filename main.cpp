#include <stdio.h>
#include <iostream>

int main() {
	// Input word
	char n[100];
	const char guess_this_word[8] = "Hangman"; // Use char c-string
	std::cout << "Enter a character: ";
	std::cin.getline(n, 50);
	while (strlen(n) > 1) {
		std::cout << strlen(n) << std::endl;
		std::cout << "You input more than a character. Please re-input: ";
		std::cin.getline(n, 50);
	}
	
	// Check if input char in the word
	int i;
	for (i = 1; i < 10; ++i) {
		std::cout << "Just have some fun";
	}
	
}