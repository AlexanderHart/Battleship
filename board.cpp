#include <iostream>

#include "board.h"

board::board() {
	for (int index = 0; index < 50; index++) {
		field[index] = '_';
	}
	
	guessAmount = 0;
}



void board::display() {
	for (int i = 0; i < 50; i++) {
		std::cout << i << " ";
	}
	
	std::cout << std::endl;
	
	for (int i = 0; i < 50; i++) {
		std::cout << field[i];
		
		if (i < 9)
			std::cout << " ";
		else
			std::cout << "  ";
	}
	
	std::cout << std::endl;
}



void board::addShip(int location, int size) {
	for(int index = location; index < (location + size); index++) {
		field[index] = 'O';
	}
}



bool board::getStatus() {
	int count = 0;

	for (int index = 0; index < 50; index++) {
		if (field[index] == '@')
			count++;
	}
	
	if (count == 20) // Magic number
		return true;
	else
		return false;
}



char board::getField(int input) {
	return field[input];
}



void board::changeField(int position, char marker) {
	field[position] = marker;
}



bool board::validate(int input) {
	for (int index = 0; index < guessAmount; index++) {
		if (input == guesses[index]) {
			return false;
			break;
		} 
	}
	
	return true;
	
	//if ((input < 0 || input > 49))
	//	return false;
}



void board::getMove(board &oponent) {
	int guess;

	do {
		// Prompt for guess input
		std::cout << "enter your shot (ex. 23): ";
		std::cin >> guess;
		guessAmount++;
	} while (guess > 49 || guess < 0);
 
	if (oponent.getField(guess) == 'O') { 	// Hit
		oponent.changeField(guess, '@'); 	// Update the field position
	}
	else if (field[guess] == '_') { 		// Miss
		oponent.changeField(guess, 'X'); 	// Update the field position
	}
}