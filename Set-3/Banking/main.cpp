#include<iostream>
#include"SavingsAccount.h"
#include"SavingsAccount.cpp"
#include"CreditAccount.h"
#include"AccountBase.h"
#include"AccountBase.cpp"

int main()
{
    SavingsAccount s("1001", "Vignesh", 1000.0);
    s.debit(200);
    s.display();
    return 0;
}