#include "gtest/gtest.h"
#include "fraction.h"

TEST(Fraction, EmptyCtor)
{
    fraction f1;
    EXPECT_EQ(0, f1.get_numerator());
    EXPECT_EQ(0,f1.get_denominator());
}

TEST(Fraction, ParamCtor)
{
    fraction f1(10, 20);
    EXPECT_EQ(10, f1.get_numerator());
    EXPECT_EQ(20,f1.get_denominator());

}

TEST(Fraction, CopyCtor)
{
    fraction f1(10, 20);
    fraction f2(f1);

    EXPECT_EQ(10, f1.get_numerator());
    EXPECT_EQ(20,f1.get_denominator());
    
    EXPECT_EQ(10, f2.get_numerator());
    EXPECT_EQ(20,f2.get_denominator());

    EXPECT_EQ(10, f2.get_numerator());
}
#if 0
fraction operator+(const fraction& ppf1, const fraction& ppf2)
{
    //a/b + c/d ==> ad+bc / bd
    
    int temp_num = ppf1.numerator* ppf2.denominator + ppf2.denominator* ppf1.numerator;
    int temp_den = ppf1.denominator * ppf2.denominator;
    
    fraction temp(temp_num, temp_den);
    // value, address, reference
    return temp;
}
#endif
TEST(Fraction, OperationPlus)
{
    fraction f1(10, 20);
    fraction f2(f1);
    fraction f3;

    f3 = f1 + f2; // operator+(f1, f2) or f1.operator+(f2)
    EXPECT_EQ(10, f1.get_numerator());
    EXPECT_EQ(20,f1.get_denominator());
    
    EXPECT_EQ(10, f2.get_numerator());
    EXPECT_EQ(20,f2.get_denominator());
    
    EXPECT_EQ(400, f3.get_numerator());
    EXPECT_EQ(400,f3.get_denominator());
}
TEST(Fraction, OperationIncrement)
{
    fraction f1(10, 20);    
    fraction f2(0,0);
    fraction f3(0,0);

    f2 = ++f1; // a/b + 1    ==> a+b / b
    // f1.operator++()
    // Possible ways of using the operator, f2 = ++f1 + 1;
    EXPECT_EQ(30, f1.get_numerator());
    EXPECT_EQ(20,f1.get_denominator());

    EXPECT_EQ(30, f2.get_numerator());
    EXPECT_EQ(20,f2.get_denominator());

    f3 = f1++; // a/b + 1    ==> a+b / b
    // f1.operator++(dummy)
    EXPECT_EQ(50, f1.get_numerator());
    EXPECT_EQ(20,f1.get_denominator());

    EXPECT_EQ(30, f3.get_numerator());
    EXPECT_EQ(20,f3.get_denominator());

}

int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
