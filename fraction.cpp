#include "fraction.h"
#include <cassert>
#include <iostream>

#define assertm(exp, msg) assert(((void)msg, exp))

fraction::fraction() : m_numerator(1), m_denominator(1)
{
    printFraction();
}

fraction::fraction(double init_n, double init_d)
{
    setFraction(init_n, init_d);
    printFraction();
}

void fraction::setFraction(double numerator, double denominator)
{
    setValueN(numerator);
    setValueD(denominator);
}

void fraction::setValueN(double value)
{
    m_numerator = value;
}

void fraction::setValueD(double value)
{
    assertm(value == 0, "Fehler 0");
    m_denominator = value;
}

double fraction::getValueD()
{
    return m_denominator;
}

double fraction::getValueN()
{
    return m_numerator;
}

void fraction::printFraction()
{
    //String Ausgabe besser
    std::cout << "fraction:" << m_numerator << "/" << m_denominator << "\n";
}

//Operator Überladung
fraction fraction::operator+(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN()*b.getValueD())+(this->getValueD()*b.getValueN()),this->getValueD()*b.getValueD());
    return result;
};
fraction fraction::operator*(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() * b.getValueN()), this->getValueD() * b.getValueD());
    return result;
}; 

fraction fraction::operator-(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() * b.getValueD()) - (this->getValueD() * b.getValueN()), this->getValueD() * b.getValueD());
    return result;
}; 

fraction fraction::operator/(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() / this->getValueD()) , b.getValueN() / b.getValueD());
    return result;
};

