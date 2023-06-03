#include <stdio.h>
#include <iostream>

int main() {
	char n[100];
	char guess_this_word[8] = "Hangman"; // Use char c-string
	int length_of_input;
	std::cout << "Enter a character: ";
	std::cin >> n;
	length_of_input = strlen(n);
	if (length_of_input > 1) {
		std::cout << "You input more than a character. Please re-input";
	}
}