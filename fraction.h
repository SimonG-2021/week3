#pragma once

class fraction
{
private:
    double m_numerator;
    double m_denominator;

public:
    fraction();
    fraction(double init_n, double init_d);

    void setFraction(double numerator, double denominator);
    void setValueN(double value);
    void setValueD(double value);

    double getValueD();
    double getValueN();
    double getDecimal();
    
    void shorten();
    void printFraction();
    
    fraction operator+(fraction b);
    fraction operator-(fraction b);
    fraction operator*(fraction b);
    fraction operator/(fraction b);
    bool fraction::operator==(fraction b);
};