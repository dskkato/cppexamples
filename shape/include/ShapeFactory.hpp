#pragma once

#include "ShapeCategory.hpp"
#include "Shape.hpp"
#include <memory>

class ShapeFactory final
{
public:
    static std::unique_ptr<Shape> create(const ShapeCategory);

private:
    ShapeFactory() = delete;
};