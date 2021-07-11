#include "Rectangle.h"

Rectangle::Rectangle():m_length(1),m_breadth(1)
{

}

Rectangle::Rectangle(int l, int b):m_length(l),m_breadth(b)
{

}

double Rectangle::area()
{
    return m_length*m_breadth;
}

double Rectangle::circumference()
{
    return 2*(m_length+m_breadth);
}
