#include "Shape.hpp"
#include "ShapeFactory.hpp"

void draw(const Shape &shape)
{
    shape.draw();
}

int main()
{
    using ShapeFactory::create;
    using ShapeFactory::ShapeCategory;

    {
        auto shape = create(ShapeCategory::Square);
        draw(*shape);
    }

    {
        auto shape = create(ShapeCategory::Circle);
        draw(*shape);
    }

    {
        auto shape = create(ShapeCategory::Shapes);
        draw(*shape);
    }
    return 0;
}
