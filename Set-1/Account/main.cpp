#include<iostream>
#include"Account.h"
#include"Account.cpp"

using namespace std;

int main()
{
    Account a1("Vicky","2021",5500.0);
    a1.credit(2000.0);
    a1.debit(3000.0);
    cout<<"Balance: "<<a1.getBalance()<<endl;

    return 0;
}