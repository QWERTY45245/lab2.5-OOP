#include "RightAngled.h"
#include <cmath>
#include <iostream>

RightAngled::RightAngled() {
    area = 0.0;
}

void RightAngled::Init(const Triangle& tri) {
    triangle = tri;
}

void RightAngled::CalculateArea() {
    double a = triangle.GetSide1();
    double b = triangle.GetSide2();
    double c = triangle.GetSide3();

    double s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
}

double RightAngled::GetArea() const {
    return area;
}

void RightAngled::Display() const {
    std::cout << "Area of the right-angled triangle: " << area << std::endl;
}
