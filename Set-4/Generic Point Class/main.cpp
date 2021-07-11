#include<iostream>
#include"Point.h"

int main()
{
    Point<int> p(5,5);
    p.display();
    Point<double> p2(3.8,4.2);
    p2.display();

    return 0;
}