all:
	c++ -std=c++14 -c src/Shapes.cpp -I./inc -I./include -o Shapes.o  
	c++ -std=c++14 -c src/ShapeFactory.cpp -I./inc -I./include -o ShapeFactory.o  
	c++ -std=c++14 -c src/Circle.cpp -I./inc -I./include -o Circle.o  
	c++ -std=c++14 -c src/Square.cpp -I./inc -I./include -o Square.o  
	ar -crs libshape.a *.o
