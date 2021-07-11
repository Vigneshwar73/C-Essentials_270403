#include "Box.h"
#include<iostream>

Box::Box()
{
    m_length = 1;
    m_breadth = 1;
    m_height = 1;
}
Box::Box(int x, int y, int z)
: m_length(x), m_breadth(y), m_height(z)
{

}
Box::Box(int x)
: m_length(x),m_breadth(x),m_height(x)
{

}
Box::Box(const Box& obj) //Copy constructor
{
    m_length = obj.m_length;
    m_breadth = obj.m_breadth;
    m_height = obj.m_height;
}
int Box::length() const
{
    return m_length;
}
int Box::breadth() const
{
    return m_breadth;
}
int Box::height() const
{
    return m_height;
}
int Box::volume() const
{
    return (m_length*m_breadth*m_height);
}
void Box::display() const
{
    std::cout<<"Length = "<<m_length<<std::endl;
    std::cout<<"Breadth = "<<m_breadth<<std::endl;
    std::cout<<"Height = "<<m_height<<std::endl;
}
