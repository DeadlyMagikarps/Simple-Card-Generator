CC = g++
DEBUG = -g
CFLAGS = -Wall -c -std=c++11 $(DEBUG)
LFLAGS = -Wall -std=c++11 $(DEBUG)

cardmain : cardmain.o Card.o
	$(CC) $(LFLAGS) cardmain.o Card.o -o CardMain

cardmain.o : cardmain.cpp Card.h
	$(CC) $(CFLAGS) cardmain.cpp

Card.o : Card.cpp Card.h
	$(CC) $(CFLAGS) Card.cpp

clean:
	\rm *.o CardMain


