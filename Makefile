CXX= g++
CXXFLAGS= -Wall -Werror -Wextra -pedantic -std=c++17
SCRIPT= src/main.cc
EXE= alchemist
SFLAGS= -lsfml-graphics -lsfml-window -lsfml-system

all:
	$(CXX) $(CXXFLAGS) -c $(SCRIPT)
	$(CXX) main.o -o $(EXE) $(SFLAGS)
	rm main.o
