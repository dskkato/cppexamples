#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle() = default;
    ~Circle() = default;

    void draw() const override;
};