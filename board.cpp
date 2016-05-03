#include <iostream>

#include "board.h"

board::board() {
	for (int index = 0; index < 50; index++) {
		field[index] = '_';
	}
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
		field[index] = 'X';
	}
}