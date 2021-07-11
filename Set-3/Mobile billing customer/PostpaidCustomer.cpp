#include "PostpaidCustomer.h"

PostpaidCustomer::PostpaidCustomer():CustomerBase()
{
    
}

PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std::string num,double bal, int a):CustomerBase(id,name,num,bal),m_billDate = a
{
    
    
}


PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std::string num):CustomerBase(id,name,num)
{
    
}

void PostpaidCustomer::billPay(double x)
{
    double m_balance = getBalance();
    m_balance += x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void PostpaidCustomer::credit(double x)
{
    double m_balance = getBalance();
    m_balance += x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void PostpaidCustomer::makeCall(double x)
{
    std::cout<<"Allowed to make call"<<std::endl;

}

double PostpaidCustomer::getBalance() const
{
    return m_balance;
}

void PostpaidCustomer::dispay() const
{
    std::cout<<"Current Balance: "<<getBalance()<<std::endl;
}
