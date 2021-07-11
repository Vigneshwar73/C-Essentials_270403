#include "Account.h"

Account::Account():m_accName(""),m_accNumber(""),m_balance(0.0)
{

}

Account::Account(std::string name, std::string num, double bal)
:m_accName(name),m_accNumber(num),m_balance(bal)
{

}

Account::Account(std::string name, std::string num)
:m_accName(name),m_accNumber(num),m_balance(0.0)
{

}

Account::Account(const Account& ac)
{
    m_accName = ac.m_accName;
    m_accNumber = ac.m_accNumber;
    m_balance = ac.m_balance;
}

void Account::debit(double x)
{
    m_balance = m_balance - x;
}

void Account::credit(double x)
{
    m_balance = m_balance + x;
}

double Account::getBalance() const
{
    return m_balance;
}

void Account::dispay() const
{
    std::cout<<"Account Name: "<<m_accName<<std::endl;
    std::cout<<"Account Number: "<<m_accNumber<<std::endl;
    std::cout<<"Balance: "<<m_balance<<std::endl;
}
