/**
 * @file fraction.h
 * @author Bharath.G ()
 * @brief Interface for fraction class
 * @version 0.1
 * @date 2021-12-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef FRACTION_H_
#define FRACTION_H_

class fraction
{
private:
    int numerator;
    int denominator;
   // int* ptr;
public:
    fraction();
    fraction(int, int);
    fraction(const fraction&);
    ~fraction();

    void set_numerator(int);
    void set_denominator(int);
    int get_numerator()const;
    int get_denominator()const;
    //friend fraction operator+(fraction ppf1, fraction ppf2);
    fraction operator+(const fraction&);
    fraction& operator++();
    fraction operator++(int );
};

#endif
