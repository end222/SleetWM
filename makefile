#
# SleetWM Project
# By Pablo Orduna (end222)
# File: makefile
 

CC = g++
CXXFLAGS += -std=c++11 -std=c++14
CXXFLAGS += `pkg-config --cflags x11 libglog`
LDFLAGS += `pkg-config --libs x11 libglog`

main: WinMan.o
	$(CC) src/main.cpp WinMan.o -o sleetwm $(LDFLAGS)

WinMan.o: wm/WinMan.cpp wm/WinMan.h
	$(CC) -c wm/WinMan.cpp $(LDFLAGS)

clean: 
	rm *.o
	rm sleetwm
