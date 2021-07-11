#include<iostream>
#include"MyArray.h"

int main()
{

    MyArray<int> a1(10);
    a1.append(1);
    a1.append(7);
    a1.append(3);
    std::cout<<a1.at(1)<<std::endl;
    std::cout<<a1.search(4)<<std::endl;
    std::cout<<"Sum of elements: "<<a1.sum()<<std::endl;
    std::cout<<"Minimum: "<<a1.min()<<std::endl;

   
    return 0;
}