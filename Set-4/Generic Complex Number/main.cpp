#include<iostream>
#include"Complex.h"

int main()
{

    Complex<int> c(5,3);
    c.display();
    Complex<double> c2(2.9,3.5);
    c2.display();
    return 0;
}