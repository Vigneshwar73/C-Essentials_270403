#include<iostream>
#include"Distance.h"
#include"Distance.cpp"

int main()
{

    Distance d1(5,2);
    Distance d2(6,3);
    Distance d3 = d1+d2;
    d3.display();
    bool y = d1>d2;
    std::cout<<y<<std::endl;
    Distance d4;
    d4 = d1 - 3;
    d4.display();
    (++d2).display();
    
    return 0;
}