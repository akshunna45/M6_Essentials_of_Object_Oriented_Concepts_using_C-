#include "fraction.h"
fraction::fraction() : numerator(0), denominator(0)
{
    //ptr = new int [10];
}

fraction::fraction(int num1, int num2) : numerator(num1), denominator(num2)
{   
}

fraction::fraction(const fraction& ref): numerator(ref.numerator), denominator(ref.denominator)
{
}
void fraction::set_numerator(int val)
{
    numerator = val;
}
void fraction::set_denominator(int val)
{
    denominator = val;
}
int fraction::get_denominator() const
{
    return denominator;
}
int fraction::get_numerator() const
{
    return numerator;
}
fraction::~fraction()
{
}

fraction fraction::operator+(const fraction& ref)
{
    //a/b + c/d ==> ad+bc / bd
    
    int temp_num = numerator* ref.denominator + ref.denominator* numerator;
    int temp_den = denominator * ref.denominator;
    
    // value, address, reference
    return fraction(temp_num, temp_den);
}


fraction& fraction::operator++()
{   
    numerator = numerator + denominator;
    return *this;
}
fraction fraction::operator++(int dummy)
{
    fraction temp(*this);
    numerator = numerator + denominator;
    return temp;
}
/*
    int A;
    int* ptr = &A;

    return *ptr;
*/