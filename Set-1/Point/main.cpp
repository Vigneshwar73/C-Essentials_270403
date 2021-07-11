#include<iostream>
#include"Point.h"
#include"Point.cpp"

int main()
{

    Point p(-3,2);
    Point p2(0,0);
    std::cout<<p.isOnXAxis()<<std::endl;
    p.display();
    std::cout<<p2.isOnXAxis()<<std::endl;
    std::cout<<p.quadrant()<<std::endl;;
    std::cout<<"Distance of p1 from origin: "<<p.distanceFromOrigin()<<std::endl;
    
    return 0;
}