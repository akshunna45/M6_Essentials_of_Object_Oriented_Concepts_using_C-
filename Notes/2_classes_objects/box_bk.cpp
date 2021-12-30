#include <iostream>
class box
{
private:
    int length;     // Data members
    int height;
    int breadth;
    int weight;

    const int id;
    int* ptr;

public:
    // Empty ctor
    box() : length(0), height(0), breadth(0), weight(0), id(10), ptr(NULL)
    {
        std::cout << "Empty ctor, Volume = "<<find_volume()<< std::endl;
        // Initialization & Assignment
        #if 0
        id = 10;
        length = 0;
        height = 0;
        breadth = 0; 
        weight = 0;
        #endif
        ptr = new int;
    }
    // Parameterized Ctor
    box(int len, int ht, int br, int wt) : length(len), height(ht), breadth(br), weight(wt), id(100), ptr(NULL)
    {
        std::cout << "Parameterized ctor - all values, Volume = "<<find_volume()<< std::endl;
        #if 0
        length = len;
        height = ht;
        breadth = br; 
        weight = wt;
        #endif
        ptr = new int;
    }
    // Parameterized Ctor
    box(int val) : length(val), height(val), breadth(val), weight(val), id(1000), ptr(NULL)
    {
        std::cout << "Parameterized ctor - one value"<< std::endl;
        //length = height = breadth = weight = val;
        ptr = new int;
    }
    int find_volume()       // Member functions
    {
        return length * height * breadth;
    }

    void update_lenght(int len)
    {
        length = len;
    }

    int get_length()
    {
        return length;
    }

    void set_ptr(int val)
    {
        *ptr = val;
    }
    int get_ptr()
    {
        return *ptr;
    }

    ~box()
    {
        std::cout << "Dtor"<< std::endl;
        delete ptr;
    }
};
int fun()
{
    box b3; // Stack
    return 0;
}

int main()
{
    #if 0
    box b1; // Object instantiation

    box b2(10, 10, 10, 10);
    b1.set_ptr(-100);

    std::cout << "1:Length = " << b1.get_length()<<" ptr = "<<b1.get_ptr()<< std::endl;
    b1.find_volume();
    b1.update_lenght(10);
    
    std::cout << "2:Length = " << b1.get_length()<< std::endl;

    int a;
    a = 10; // Assignemnt

    int b = 10; // Initialization
    #endif
    fun();
    std::cout << "Inside main " << std::endl;
    return 0;
}