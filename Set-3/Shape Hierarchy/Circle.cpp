#include "Circle.h"


Circle::Circle():m_radius(1)
{

}

Circle::Circle(int r):m_radius(r)
{

}

double Circle::area()
{
    return PI*m_radius*m_radius;
}

double Circle::circumference()
{
    return 2*PI*m_radius;
}
