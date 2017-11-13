CC = g++

main: WinMan.o
	$(CC) src/main.cpp WinMan.o -std=c++11 -std=c++14 -o sleetwm

WinMan.o: wm/WinMan.cpp wm/WinMan.h
	$(CC) -c -std=c++11 -std=c++14 wm/WinMan.cpp
