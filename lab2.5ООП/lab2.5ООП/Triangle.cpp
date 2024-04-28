#include "Triangle.h"
#include <cmath>
#include <iostream>
#include <string>
#include<Windows.h>
using namespace std;
Triangle::Triangle() {
    side1 = side2 = side3 = 0.0;
}

Triangle::Triangle(double s1, double s2, double s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

Triangle::Triangle(const Triangle& other) {
    side1 = other.side1;
    side2 = other.side2;
    side3 = other.side3;
}


void Triangle::Init(double s1, double s2, double s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}

void Triangle::Read() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    cout << "¬вед≥ть довжини стор≥н трикутника: ";
    cin >> side1 >> side2 >> side3;
}

void Triangle::Display() {
    cout << toString() << endl;
}

double Triangle::GetSide1() const {
    return side1;
}

double Triangle::GetSide2() const {
    return side2;
}

double Triangle::GetSide3() const {
    return side3;
}

void Triangle::SetSide1(double s) {
    side1 = s;
}

void Triangle::SetSide2(double s) {
    side2 = s;
}

void Triangle::SetSide3(double s) {
    side3 = s;
}
std::istream& operator>>(std::istream& is, Triangle& triangle) {
    std::cout << "Enter the lengths of the triangle sides: ";
    is >> triangle.side1 >> triangle.side2 >> triangle.side3;
    return is;
}

std::ostream& operator<<(std::ostream& os, const Triangle& triangle) {
    os << "Triangle with sides " << triangle.side1 << ", " << triangle.side2 << ", " << triangle.side3;
    return os;
}

Triangle::operator std::string() const {
    return toString();
}

Triangle& Triangle::operator++() {
    ++side1;
    ++side2;
    ++side3;
    return *this;
}

Triangle Triangle::operator++(int) {
    Triangle temp(*this);
    ++(*this);
    return temp;
}

Triangle& Triangle::operator--() {
    --side1;
    --side2;
    --side3;
    return *this;
}

Triangle Triangle::operator--(int) {
    Triangle temp(*this);
    --(*this);
    return temp;
}

double Triangle::Perimeter() const {
    return side1 + side2 + side3;
}

double Triangle::AngleA() const {
    return acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3));
}

double Triangle::AngleB() const {
    return acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3));
}

double Triangle::AngleC() const {
    return acos((side1 * side1 + side2 * side2 - side3 * side3) / (2 * side1 * side2));
}

std::string Triangle::toString() const {
    return "Triangle with sides " + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
}
