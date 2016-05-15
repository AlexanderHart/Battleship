#ifndef TARGET_H
#define TARGET_H
class target {
	private:
		int		size;
		int		location;
		
	public:
				target();
		void	setSize(int);
		int		getSize();
		void	setLocation(int);
		int		getLocation();
};
#endif