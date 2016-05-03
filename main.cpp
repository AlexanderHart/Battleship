#include <iostream>

#include "board.h"
#include "target.h"

using namespace std;

int
main() {
	board	playerOne;
	target	playerOneTarget[5];
	
	// Future Implementation: have user choose values
	
	playerOneTarget[0].setSize(6);
	playerOneTarget[0].setLocation(20);
	
	playerOne.display();
	playerOne.addShip(playerOneTarget[0].getLocation(), playerOneTarget[0].getSize());
	cout << endl;
	playerOne.display();
}