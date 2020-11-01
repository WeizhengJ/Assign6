.DEFAULT_GOAL := bstDriver.exe
bstDriver.o: bstDriver.cc
	g++ -c bstDriver.cc -Wall -std=c++11

bstDriver.exe: bstDriver.o
	g++ -o bstDriver.exe bstDriver.o -Wall -std=c++11

clean:
	rm *.o bstDriver.exe
