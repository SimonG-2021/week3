#include "main.h"
#include <iostream>
using namespace std;

class fraction{
private:
    double m_numerator;
    double m_denominator;
    //double val;

public:
    fraction():m_numerator(0), m_denominator(0) { cout << "construct a fraction" << m_numerator << "/" << m_denominator << "\n"; }
    fraction(double init_c, double init_d):m_numerator(0),m_denominator(0) 
    {
        this->m_numerator = init_c;
        this->m_denominator = init_d;
        cout << "construct a fraction" << m_numerator << "/" << m_denominator << "\n";
    }

    void fraction::newfraction(double numerator, double denominator) {};
void fraction::newValueC(double value){
    m_numerator = value;
}
void fraction::newValueD(double value) {
    m_denominator = value;
}
double fraction::getValueD() {
    return m_denominator;
}
double fraction::getValueC() {
    return m_numerator;
}
void fraction::printFraction(){
    cout << "fraction:" << m_numerator << "/" << m_denominator << "\n";
}
//Operator Überladung
fraction fraction::sum(fraction a, fraction b) {
   // int value = a.m_numerator / a.m_denominator + b.m_numerator/b.m_denominator;
    fraction result;
    
    result.m_numerator = a.m_numerator * b.m_denominator+ a.m_denominator * b.m_numerator;
    result.m_denominator= a.m_denominator * b.m_denominator;


    return result;
}
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
    bruch1.newValueC(6);
    bruch1.newValueD(6);
    fraction summe = summe.sum(bruch6, bruch2);
    //fraction bruch3= bruch1 + summe;
    bruch1.printFraction();
    summe.printFraction();
    int a=5;
    cin>>a;
    std::cout<<"Hello World";
    return 5;
}
