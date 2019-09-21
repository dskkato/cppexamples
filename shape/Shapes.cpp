#include "Shapes.hpp"
#include <iostream>

void Shapes::draw() const
{
    std::cout << "shapes" << std::endl;
    for (auto &shape : shapes)
        shape->draw();
}

void Shapes::add(Shape const *shape)
{
    shapes.push_back(shape);
}