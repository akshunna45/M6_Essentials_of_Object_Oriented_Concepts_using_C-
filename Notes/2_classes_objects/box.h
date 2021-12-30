/**
 * @file box.h
 * @author Bharath.G ()
 * @brief Declaration of box class
 * @version 0.1
 * @date 2021-12-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef BOX_H_
#define BOX_H_

// Macros
// Structures 
// Class skeleton

// Dont add variables

class box
{
private:
    int length;     // Data members
    int height;
    int breadth;
    int weight;
public:
    box();
    box(int, int, int, int);
    box(int);
    ~box();

    int find_volume();
    void update_lenght(int);
    int get_length();
};


#endif