#pragma once
#include "Triangle.h"

class RightAngled {
private:
    Triangle triangle;
    double area;

public:
    RightAngled();

    void Init(const Triangle& tri);
    void CalculateArea();
    void Display() const;
    double GetArea() const;
};
