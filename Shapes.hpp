#pragma once

#include "Shape.hpp"
#include <vector>

class Shapes final : public Shape
{
public:
    Shapes() = default;
    ~Shapes() = default;

    void draw() const override;

    void add(Shape const *shape);

private:
    std::vector<Shape const *> shapes;
};