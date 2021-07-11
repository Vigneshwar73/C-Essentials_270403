#include<iostream>
#include"Rectangle.h"
#include"Rectangle.cpp"

int main()
{
    Rectangle r(3,4);
    std::cout<<r.area()<<std::endl;
    return 0;
}