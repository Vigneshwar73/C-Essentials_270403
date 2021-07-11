#include<iostream>
#include"Currency.h"
#include"Currency.cpp"

int main()
{

    Currency c1(100,20);
    Currency c2(20,20);
    Currency c3 = c1+c2;
    c3.display();
    bool y = c1>c2;
    std::cout<<y<<std::endl;
    (++c2).display();
    return 0;
}