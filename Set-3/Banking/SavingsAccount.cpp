#include "SavingsAccount.h"

SavingsAccount::SavingsAccount():AccountBase()
{
   
}

SavingsAccount::SavingsAccount(std::string num, std::string name, double bal):AccountBase(num,name,bal)
{
    
}

SavingsAccount::SavingsAccount(std::string num, std::string name):AccountBase(num,name)
{
    
}

void SavingsAccount::debit(double x)
{
    double m_balance = getBalance();
    m_balance -= x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void SavingsAccount::credit(double x)
{
    double m_balance = getBalance();
    m_balance +=x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void SavingsAccount::display() const
{
    std::cout<<"Current Balance: "<<getBalance()<<std::endl;   
}
