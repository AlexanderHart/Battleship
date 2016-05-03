#ifndef BATTLESHIP_H
#define BATTLESHIP_H
class board {
	private:
		char	field[50];
	
	public:
				board(); // Initialize with empty cells
		void	display();
		void	addShip(int, int);
};
#endif