files = main.o board.o target.o

Battleship : $(files) board.h target.h
	g++ $(files) -o Battleship 

main.o : main.cpp board.h target.h
	g++ -c main.cpp

board.o : board.cpp board.h
	g++ -c board.cpp
	
target.o : target.cpp target.h
	g++ -c target.cpp

clean :
	rm $(files) Battleship 
