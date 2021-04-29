#include <iostream>
#include "fraction.h"

using namespace std;

/*
static fraction sum(fraction a, fraction b) {
    fraction result;    
    result.m_numerator = a.m_numerator * b.m_denominator+ a.m_denominator * b.m_numerator;
    result.m_denominator= a.m_denominator * b.m_denominator;

    return result;
}
static void sub(fraction a, fraction b);
static void mul(fraction a, fraction b);
static void div(fraction a, fraction b);
//square root
*/
void test();
int main()
{
    test();

    //fraction bruch1;
    //fraction bruch2(1,2);
    //fraction bruch6(6,5);
 
    //bruch1.setFraction(4, 6);
    //cout << "\n\n\n";
    //bruch2.printFraction();
    //bruch6.printFraction();
    //fraction summe= bruch6 + bruch2;
    //summe.printFraction();
    //fraction summe2 = bruch6 - bruch2;
    //summe2.printFraction();
    //fraction summe3 = bruch6 * bruch2;
    //summe3.printFraction();
    //fraction summe4 = bruch2 / bruch6;
    //summe4.printFraction();
    //cout << "\n\n\n";
    ////fraction bruch3= bruch1 + summe;
    //bruch1.printFraction();
    //int a=5;
    //cin>>a;
    //std::cout<<"Hello World";
    //return 5;
}
void test()
{
    fraction f1(1, 1);
    fraction f2(1, 2);
    fraction f3(2, 1);
    fraction f4(2, 2);
    fraction f5(3, 2);
    fraction f6(2, 1);


    if (f1 + f1 == f3)
    {
        std::cout << "affe";   
    }
    else
    {
        std::cout << "esel";
    }

}