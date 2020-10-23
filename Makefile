.DEFAULT_GOAL := josephus.exe
josephus.o: josephus.cc
	g++ -c josephus.cc -Wall -std=c++11

josephus.exe: josephus.o
	g++ -o josephus.exe josephus.o -Wall -std=c++11

clean:
	rm *.o josephus.exe
