#include "fraction.h"
#include <iostream>

fraction::fraction() : m_numerator(1), m_denominator(1)
{  
    // printFraction();
}
fraction::fraction(double init_n, double init_d)
{
    setFraction(init_n, init_d);
    //printFraction();
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
    
    if (value == 0) 
    {  
        std::cout << "Fehler 0 im Nenner \n";
        system("Pause");
        m_denominator = -1;
    }
    else
    {
        m_denominator = value;
    }
}

double fraction::getValueD()
{
    return m_denominator;
}
double fraction::getValueN()
{
    return m_numerator;
}
double fraction::getDecimal()
{
    return std::floor(((m_numerator /m_denominator) * 1000) + .5)/1000;
}

void fraction::shorten()
{
   //int ggT = std::gcd(static_cast<int>(m_numerator), static_cast<int>(m_denominator)); //-> didn´t work
    int num = static_cast<int>(m_numerator);
    int den = static_cast<int>(m_denominator);
    int ggT=0;
    int tmp=0;
    while (den != 0) 
    {
        tmp = num % den;
        num = den;
        den = tmp;
    }
    ggT=num;
    m_denominator /= ggT;
    m_numerator /= ggT;
}
void fraction::printFraction()
{
    //string ouput better?
    std::cout << "fraction:" << m_numerator << "/" << m_denominator << "\n";
}

fraction fraction::operator+(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN()*b.getValueD())+(this->getValueD()*b.getValueN()),this->getValueD()*b.getValueD());
    result.shorten();
    return result;
};
fraction fraction::operator*(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() * b.getValueN()), this->getValueD() * b.getValueD());
    result.shorten();
    return result;
}; 
fraction fraction::operator-(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() * b.getValueD()) - (this->getValueD() * b.getValueN()), this->getValueD() * b.getValueD());
    result.shorten();
    return result;
}; 
fraction fraction::operator/(fraction b)
{
    fraction result;
    result.setFraction((this->getValueN() / this->getValueD()) , b.getValueN() / b.getValueD());
    result.shorten();
    return result;
};

bool fraction::operator==(fraction b)
{
    if (this->getDecimal() == b.getDecimal())
    {
        return true;
    }
    return false;
};



