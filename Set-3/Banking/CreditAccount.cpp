#include "CreditAccount.h"

CreditAccount::CreditAccount():AccountBase()
{
    
}

CreditAccount::CreditAccount(std::string num, std::string name, double bal):AccountBase(num,name,bal)
{
    
}

CreditAccount::CreditAccount(std::string num, std::string name):AccountBase(num,name)
{
    
}

void CreditAccount::debit(double x)
{
    double m_balance = getBalance();
    m_balance -= x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void CreditAccount::credit(double x)
{
    double m_balance = getBalance();
    m_balance += x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void CreditAccount::display() const
{
    std::cout<<"Current Balance: "<<getBalance()<<std::endl;
}
