#include "Shape.hpp"
#include "ShapeCategory.hpp"
#include "ShapeFactory.hpp"

constexpr void draw(const Shape &shape)
{
    shape.draw();
}

int main()
{
    {
        auto shape = ShapeFactory::create(ShapeCategory::Square);
        draw(*shape);
    }

    {
        auto shape = ShapeFactory::create(ShapeCategory::Circle);
        draw(*shape);
    }

    {
        auto shape = ShapeFactory::create(ShapeCategory::Shapes);
        draw(*shape);
    }
    return 0;
}