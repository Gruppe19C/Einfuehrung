#include <iostream>
#include <cmath>
using namespace std;
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber()
{
}

void ComplexNumber::setKartesian(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
    this->radius = sqrt(real * real + imaginary * imaginary);
    this->angle = imaginary >= 0 ? acos(real / radius) : -acos(real / radius);
}

void ComplexNumber::setPolar(double radius, double angle)
{
    this->radius = radius;
    this->angle = angle;
    this->real = radius * cos(angle);
    this->imaginary = radius * sin(angle);
}
