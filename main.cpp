#include <iostream>

#include "board.h"
#include "target.h"

using namespace std;

int
main() {
	board	playerOne();
	board	playerTwo();
	
	target	playerOneTarget[5];
			playerOneTarget[0] = new playerOneTarget(6, 0);
			playerOneTarget[1] = new playerOneTarget(5, 10);
			playerOneTarget[2] = new playerOneTarget(4, 20);
			playerOneTarget[3] = new playerOneTarget(3, 30);
			playerOneTarget[4] = new playerOneTarget(2, 40);
	
	target	playerTwoTarget[5];
			playerTwoTarget[0] = new playerTwoTarget(6, 0);
			playerTwoTarget[1] = new playerTwoTarget(5, 10);
			playerTwoTarget[2] = new playerTwoTarget(4, 20);
			playerTwoTarget[3] = new playerTwoTarget(3, 30);
			playerTwoTarget[4] = new playerTwoTarget(2, 40);
	
	int 	currentPlayer = 0; // 0 = Player one, 1 = Player two
	
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
		
	cout << "\nPlayer two board\n";
	playerTwo.display();
	
	
	// Gameplay logic
	while (!playerOne.getStatus() && !playerTwo.getStatus()) {
		
		if (currentPlayer == 0) {
			cout << "\nPlayer one, ";
			playerOne.getMove(playerTwo);
		} else {
			cout << "\nPlayer two, ";
			playerTwo.getMove(playerOne);
		}
			
		// Switch players
		if (currentPlayer == 0)
			currentPlayer = 1;
		else
			currentPlayer = 0;
			
		cout << "\nPlayer one board\n";
		playerOne.display();
		
		cout << "\nPlayer two board\n";
		playerTwo.display();
 	}
 	
 	// Determine winner
 	if (playerOne.getStatus() == false) {
 		cout << "Player one has won" << endl;
 	}
 	else if (playerTwo.getStatus() == false) {
 		cout << "Player two has won" << endl;
 	}
 	
 	cout << endl << "Game over" << endl; 

}