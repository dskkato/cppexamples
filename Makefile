.phony: all

all: Shape.hpp Square.hpp Square.cpp Shapes.cpp Shapes.hpp main.cpp
	clang++ Circle.cpp Square.cpp Shapes.cpp main.cpp -I. -std=c++14
	./a.out
