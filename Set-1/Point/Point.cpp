#include "Point.h"
#include<cmath>
Point::Point()
:m_x(0),m_y(0)
{

}

Point::Point(int x, int y)
:m_x(x),m_y(y)
{

}

Point::Point(const Point& p)
{
    m_x = p.m_x;
    m_y = p.m_y;
}

bool Point::isOrigin() const
{
    if(m_x==0 && m_y==0)
        return true;
    else
        return false;
}

bool Point::isOnXAxis() const
{
    if(m_y ==0)
        return true;
    else
        return false;
}

bool Point::isOnYAxis() const
{
    if(m_x==0)
        return true;
    else
        return false;
}

double Point::distanceFromOrigin() const
{
    return sqrt((m_x*m_x)+(m_y*m_y));
}


Quadrant Point::quadrant() const
{
    if(m_x>0 && m_y>0)
    {
        return Q1;
    }
    else if(m_x<0 && m_y>0)
    {
        return Q2;
    }
    else if(m_x<0 && m_y<0)
    {
        return Q3;
    }
    else 
    {
        return Q4;
    }

}

void Point::display() const
{
    std::cout<<"The x coordinate is: "<<m_x<<std::endl;
    std::cout<<"The y coordinate is: "<<m_y<<std::endl;
}
