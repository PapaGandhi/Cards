FLAGS = -WALL 
EXEC = blackjack
CXX = g++

poker: deck.o card.o hand.o table.o test.o
	$(CXX) -o poker deck.o card.o hand.o table.o test.o

deck.o: deck.cpp deck.h
	$(CXX) -c deck.cpp

card.o: card.cpp card.h 
	$(CXX) -c card.cpp

#hand.o: hand.cpp hand.h \
	$(CXX) -c hand.cpp

table.o: table.cpp table.h
	$(CXX) -c table.cpp

# game.o: game.cpp \
	$(CXX) -c game.cpp

test.o: test.cpp
	$(CXX) -c test.cpp


clean:
	rm *.o poker