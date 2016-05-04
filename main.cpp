#include <iostream>

#include "board.h"
#include "target.h"

using namespace std;

int
main() {
	board	playerOne;
	target	playerOneTarget[5];
	
	board	playerTwo;
	target	playerTwoTarget[5];
	
	// Future Implementation: have user choose values
	
	// Setting up the game, but can't this be done in some
	// kind of instructor?
	
	playerOneTarget[0].setSize(6);
	playerOneTarget[0].setLocation(0);
	playerOneTarget[1].setSize(5);
	playerOneTarget[1].setLocation(10);
	playerOneTarget[2].setSize(4);
	playerOneTarget[2].setLocation(20);
	playerOneTarget[3].setSize(3);
	playerOneTarget[3].setLocation(30);
	playerOneTarget[4].setSize(2);
	playerOneTarget[4].setLocation(39);
	
	playerTwoTarget[0].setSize(2);
	playerTwoTarget[0].setLocation(0);
	playerTwoTarget[1].setSize(3);
	playerTwoTarget[1].setLocation(8);
	playerTwoTarget[2].setSize(4);
	playerTwoTarget[2].setLocation(16);
	playerTwoTarget[3].setSize(5);
	playerTwoTarget[3].setLocation(26);
	playerTwoTarget[4].setSize(6);
	playerTwoTarget[4].setLocation(36);
	
	playerOne.addShip(playerOneTarget[0].getLocation(), playerOneTarget[0].getSize());
	playerOne.addShip(playerOneTarget[1].getLocation(), playerOneTarget[1].getSize());
	playerOne.addShip(playerOneTarget[2].getLocation(), playerOneTarget[2].getSize());
	playerOne.addShip(playerOneTarget[3].getLocation(), playerOneTarget[3].getSize());
	playerOne.addShip(playerOneTarget[4].getLocation(), playerOneTarget[4].getSize());
	
	playerTwo.addShip(playerTwoTarget[0].getLocation(), playerTwoTarget[0].getSize());
	playerTwo.addShip(playerTwoTarget[1].getLocation(), playerTwoTarget[1].getSize());
	playerTwo.addShip(playerTwoTarget[2].getLocation(), playerTwoTarget[2].getSize());
	playerTwo.addShip(playerTwoTarget[3].getLocation(), playerTwoTarget[3].getSize());
	playerTwo.addShip(playerTwoTarget[4].getLocation(), playerTwoTarget[4].getSize());
	
	cout << "Player one board\n";
	playerOne.display();
		
	cout << "\n\nPlayer two board\n";
	playerTwo.display();
	
	// Begin gameplay
	while (!playerOne.isSunk() || !playerTwo.isSunk()) { // While either boards are active.
		int currentPlayer = 0; // 0 = Player one, 1 = Player two
		
		if (currentPlayer == 0) {
			playerOne.getMove();
		} else {
			playerTwo.getMove();
		}
		
		switchPlayer(currentPlayer);
	}
}