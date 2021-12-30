//#include "stdio.h"
#include <iostream>
// int fun(int);

using namespace std;

namespace bharath1
{
    int val = 0;
    int funtion(int var)
    {
        cout << "Welcome to C++ programming" << std::endl;
        std::cout << "Enter Value" << std::endl;
        std::cin >> val;
        std::cout << "You have entered value = " << val << std::endl;
    }
}

namespace bharath2
{
    int val = 0;
    int funtion(int var)
    {
        std::cout << "Welcome to C++ programming" << std::endl;
        std::cout << "Enter Value" << std::endl;
        std::cin >> val;
        std::cout << "You have entered value = " << val << std::endl;
    }
}
using namespace bharath1;
using namespace bharath2;
int main()
{
    // fun(10);
    // printf("Size of %d", sizeof('c'));
    bharath1::funtion(10);
    bharath1::funtion(20);
    // std::cout << "size of char is" << sizeof('c');

    return 0;
}

// File Naming conventiosn
/*
 * .cc
 * .cxx
 * .cpp
 */