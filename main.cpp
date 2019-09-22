#include "Shape.hpp"
#include "ShapeCategory.hpp"
#include "ShapeFactory.hpp"

int main()
{
    auto shape = ShapeFactory::create(ShapeCategory::Square);

    shape->draw();

    return 0;
}