#ifndef TARGET_H
#define TARGET_H
class target {
	private:
		int		size;
		int		location;
		bool	sunk = false;
		
	public:
		void	setSize(int);
		int		getSize();
		void	setLocation(int);
		int		getLocation();
		bool	isSunk();
};
#endif