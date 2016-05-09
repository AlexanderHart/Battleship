#ifndef BATTLESHIP_H
#define BATTLESHIP_H
class board {
	private:
		char	field[50];
		bool	won;
	
	public:
				board(); // Initialize with empty cells
		void	display();
		void	addShip(int, int);
		bool	getStatus();
		void	getMove(board&);
		void	changeField(int, char);
		char	getField(int);
};
#endif