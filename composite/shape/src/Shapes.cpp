#include "Shapes.hpp"
#include "Circle.hpp"
#include "Square.hpp"

Shapes::Shapes()
{
    shapes.emplace_back(std::make_unique<Circle>());
    shapes.emplace_back(std::make_unique<Square>());
    shapes.emplace_back(std::make_unique<Circle>());
}

void Shapes::draw() const
{
    for (auto &shape : shapes)
        shape->draw();
}
