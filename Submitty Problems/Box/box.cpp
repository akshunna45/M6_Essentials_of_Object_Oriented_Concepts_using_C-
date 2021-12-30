#include "box.h"

Box::Box()
{
      m_length = 0;
      m_breadth = 0;
      m_height = 0;
}
Box::Box(double a)
{
    m_length = a;
}
Box::Box(double a, double b, double c)
{
      m_length = a;
      m_breadth = b;
      m_height = c;
}
Box::Box(const Box &box)
{
    Box::m_length = box.m_length;
    Box::m_breadth = box.m_breadth;
    Box::m_height = box.m_height;
}
double Box::length() const {return m_length;}

double Box::height() const {return m_height;}

double Box::breadth() const {return m_breadth;}

double Box::volume() const {return m_length*m_breadth*m_height;}

void Box::display() const { }

