#include "Shape.hpp"
#include "Square.hpp"
#include "Circle.hpp"
#include "Shapes.hpp"

void draw(const Shape &shape)
{
    shape.draw();
}

int main()
{
    Square square;
    Circle circle;

    draw(square);
    draw(circle);

    Shapes shapes;

    shapes.add(&square);
    shapes.add(&circle);

    draw(shapes);

    return 0;
}