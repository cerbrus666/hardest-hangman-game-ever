#include <stdio.h>
#include <iostream>

int main() {
	char n[100];
	char guess_this_word[8] = "Hangman"; // Use char c-string
	std::cout << "Enter a character: ";
	std::cin.getline(n, 50);
	while (strlen(n) > 1) {
		std::cout << strlen(n);
		std::cout << "You input more than a character. Please re-input: ";
		std::cin.getline(n, 50);
	}
}