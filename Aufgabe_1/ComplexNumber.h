#ifndef ComplexNumber_h
#define ComplexNumber_h

class ComplexNumber
{
private:
    float real, imaginary;
    float radius, angle;

public:
    ComplexNumber();

    void setKartesian(double real, double imaginary);

    void setPolar(double radius, double angle);

    void setReal(double real) { this->real = real; }

    void setImaginary(double imaginary) { this->imaginary = imaginary; }

    void setRadius(double radius) { this->radius = radius; }

    void setAngle(double angle) { this->angle = angle; }

    float getReal() { return real; }

    float getImaginary() { return imaginary; }

    float getRadius() { return radius; }

    float getAngle() { return angle; }
};

#endif