#include<iostream>
#include"Box.h"
#include"Box.cpp"

int main(){

    Box b(5);
    Box b2(5,3,2);
    std::cout<<"Box 2 Dimensions: "<<b2.length()<<"X"<<b2.breadth()<<"X"<<b2.height()<<std::endl;
    b.display();
    return 0;
}