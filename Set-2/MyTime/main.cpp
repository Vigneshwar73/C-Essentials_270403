#include<iostream>
#include"MyTime.h"
#include"MyTime.cpp"

int main()
{
    MyTime t1(10,5,30);
    MyTime t2(8,20,10);
    MyTime t3 = t1+t2;
    t3.display();
    MyTime t4 = ++t1;
    t4.display();
    return 0;
}