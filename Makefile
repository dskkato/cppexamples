.phony: all

all:
	c++ -std=c++14 main.cpp -L. -lshape -Ishape/include
	./a.out