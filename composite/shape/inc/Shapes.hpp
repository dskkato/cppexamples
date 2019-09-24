#pragma once

#include "Shape.hpp"
#include <vector>
#include <memory>

class Shapes final : public Shape
{
public:
    Shapes();
    ~Shapes() = default;

    void draw() const override;

private:
    std::vector<std::unique_ptr<Shape>> shapes;
};