#include "ShapeFactory.hpp"
#include "Circle.hpp"
#include "Square.hpp"
#include "Shapes.hpp"

std::unique_ptr<Shape> ShapeFactory::create(const ShapeCategory shapeCategory)
{
    std::unique_ptr<Shape> ret;

    switch (shapeCategory)
    {
    case ShapeCategory::Circle:
        ret = std::make_unique<Circle>();
        break;
    case ShapeCategory::Square:
        ret = std::make_unique<Square>();
        break;
    case ShapeCategory::Shapes:
        ret = std::make_unique<Shapes>();
        break;

    default:
        ret = nullptr;
        break;
    }

    return ret;
}