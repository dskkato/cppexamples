VPATH = src include inc

CPPFLAGS = -I./inc -I./include -std=c++14
library =  libshape.a

$(library): Circle.o Shapes.o Square.o ShapeFactory.o
	$(AR) rv $@ $^

Circle.o: Circle.cpp Circle.hpp
Shapes.o: Shapes.cpp Shapes.hpp
Square.o: Square.cpp Square.hpp
ShapeFactory.o: ShapeFactory.cpp ShapeFactory.hpp

%.o: %.cpp
	$(COMPILE.cpp) $<
