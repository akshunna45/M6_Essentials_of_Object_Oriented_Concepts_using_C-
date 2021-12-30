#include "point.h"

Point::Point(int x,int y)
{
    this->m_x = x;
    this->m_y = y;
}
Point::Point()
{
}
double Point::distanceFromOrigin() const
{
    return sqrt(this->m_x*this->m_x + this->m_y*this->m_y);
}
Quadrant Point::quadrant() const
{
    if (m_x == 0 && m_y == 0 )
        return Quadrant::Origin;
    else if(m_y == 0)
        return Quadrant::X_axis;
    else if(m_x == 0)
        return Quadrant::Y_axis;
    else if(m_x > 0 && m_y > 0)
        return Quadrant::Q1;
    else if(m_x < 0 && m_y > 0)
        return Quadrant::Q2;
    else if(m_x < 0 && m_y < 0)
        return Quadrant::Q3;
    else if(m_x > 0 && m_y < 0)
        return Quadrant::Q4;
}
bool Point::isOrigin() const
{
    if (m_x == 0 && m_y == 0 )
        return true;
    return false;
}
bool Point::isOnXAxis() const
{
    if(m_y == 0)
        return true;
    return false;
}
bool Point::isOnYAxis() const
{
    if(m_x == 0)
        return true;
    return false;

}
Point::Point(const Point& p)
{
    this->m_y = p.m_y;
    this->m_x = p.m_y;
}