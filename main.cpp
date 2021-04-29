#include "main.h"
#include <iostream>
#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp))
using namespace std;

class fraction{
private:
    double m_numerator;
    double m_denominator;
    //double val;

public: 
    fraction() :m_numerator(1), m_denominator(1) {
        printFraction();
    }
    fraction(double init_n, double init_d):m_numerator(0),m_denominator(0) 
    {         
        setFraction(init_n, init_d);
        printFraction();
    }

void fraction::setFraction(double numerator, double denominator){
            setValueN(numerator);
            setValueD(denominator);
};
void fraction::setValueN(double value){
    m_numerator = value;
}
void fraction::setValueD(double value) {
    assertm(value==0,"Fehler 0");
    m_denominator = value;
}
double fraction::getValueD() {
    return m_denominator;
}
double fraction::getValueN() {
    return m_numerator;
}
void fraction::printFraction(){
    //String Ausgabe besser
    cout << "fraction:" << m_numerator << "/" << m_denominator << "\n";
}

//Operator Überladung

fraction fraction::sum(fraction a, fraction b) {
    fraction result;    
    result.m_numerator = a.m_numerator * b.m_denominator+ a.m_denominator * b.m_numerator;
    result.m_denominator= a.m_denominator * b.m_denominator;


    return result;
}
void sum2() {}
fraction fraction::sub(fraction a, fraction b);
fraction fraction::mul(fraction a, fraction b);
fraction fraction::div(fraction a, fraction b);
//square root
};



int main()
{
    fraction bruch1;
    fraction bruch2(1,2);
    fraction bruch6(6,5);
    bruch1.setFraction(4, 6);
  
    fraction summe = summe.sum(bruch6, bruch2);
    //fraction bruch3= bruch1 + summe;
    bruch1.printFraction();
    summe.printFraction();
    int a=5;
    cin>>a;
    std::cout<<"Hello World";
    return 5;
}
