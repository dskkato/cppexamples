#pragma once

#include "Shape.hpp"
#include <memory>

namespace ShapeFactory
{

enum class ShapeCategory
{
    Circle,
    Square,
    Shapes
};

std::unique_ptr<Shape> create(const ShapeCategory);

};