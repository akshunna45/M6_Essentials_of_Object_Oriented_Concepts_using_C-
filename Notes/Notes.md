# Concept of C++ - Object oriented Programming
* Good with C Programming
* C++ - Differences b/w C 

* Object Oriented Programming
    * Computer
        * RAM, Hard disk, Processor, Display, keyboard
    * Person
    * Cricket Game
        * Batsman, Bolwer, Umpire, Audience, Field, Ball
    * Football
        * Ball, Field, Audience

* Classess & Objects    - User defined data types
    * Classess - Skeleton of Object
    * Object - Instant of Class
* Operator Overloading
    * Arithmetic, Logical, Unary
        * Complex number    C1, C2
            * Add 2 complex numbers --> C1 + C2
* Inheritance
    * Polymorphism
        * Virtual Functions
* Generic programming
    * Templates
    * Standard Template Library

* Unit testing
    * Gtest or Google Test
    * Link Libraries to our code
* Makefiles

# Setup
* VS Code
* Linux OS
* Makefile
* Doxygen Comments
* Multi-file programming
* Unit testing

# Assessment
* Continuous    - 40%
    * Submitty
* End module    - 60%
    * HackerEarth
        * MCQ 
        * Programming

# Learning
* Content - Gealearn
* Additional Reference
* Collaborative learning - Yammer
* Connect sessions
    * Questions
    * Challenges
    * Some concepts - Guidance

# Additions to C++ from C
* Bjarne Stroustrap - C with Objects
* Static Type checking
    * Prototype 
* Cin, Cout
* Function overloading
* Default arguments
* Reference  - Alias, Nick name
    int A = 10;
    int& B = A;

    const int& sum = A + B;

* new & delete  - Operators, specific data, on failure - exceptions
    * Dynamic Memory in C
    * malloc, calloc, realloc 
        * int* ptr = malloc(4);
        * Functions
        * Return type - void*
        * On failure - NULL
        * free(ptr) - Memory is released (Not part of heap), ptr still points to same memory location
    int* arr1 = new int;
    delete arr1;

    int* arr = new int [10];
    delete[] arr;

* Templates


# Pointer vs Reference

int A = 10;
int B = -10;
int* ptr = &A;  // Store the Address of A at ptr

*ptr -> dereference
ptr  -> Address

ptr = &B;

int& ref = A;   // ref is a same location as A

A or ref 
ref = -10;