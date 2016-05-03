files = main.o board.o 

Battleship : $(files) board.h 
	g++ $(files) -o Battleship 

main.o : main.cpp board.h 
	g++ -c main.cpp

board.o : board.cpp board.h
	g++ -c board.cpp

clean :
	rm $(files) Battleship 
