#pragma once

#include "Shape.hpp"

class Square final : public Shape
{
public:
    Square() = default;
    ~Square() = default;

    void draw() const override;
};