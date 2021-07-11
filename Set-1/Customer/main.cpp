#include<iostream>
#include"Customer.h"
#include"Customer.cpp"

int main()
{

    Customer c1("1001","Vignesh","9923765109",500.0);
    Customer c2("1002","Dinesh","9923765110");
    Customer c3(c1);
    c1.display();
    c2.display();

    return 0;
}