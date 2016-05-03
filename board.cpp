#include <iostream>

#include "board.h"

board::board() {
	for (int index = 0; index < 50; index++) {
		field[index] = '_';
	}
}



void board::display() {
	for (int i = 0; i < 50; i++) {
		std::cout << field[i];
	}
	
	std::cout << std::endl;
}