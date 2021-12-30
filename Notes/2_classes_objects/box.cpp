#include "box.h"

box::box() : length(0), height(0), breadth(0), weight(0)
{
}
// Parameterized Ctor
box::box(int len, int ht, int br, int wt) : length(len), height(ht), breadth(br), weight(wt)
{
}
// Parameterized Ctor
box::box(int val) : length(val), height(val), breadth(val), weight(val)
{
}
int box::find_volume() // Member functions
{
    return length * height * breadth;
}
void box::update_lenght(int len)
{
    length = len;
}
int box::get_length()
{
    return length;
}

box::~box()
{
    
}