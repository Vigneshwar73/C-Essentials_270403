#include "PrepaidCustomer.h"

PrepaidCustomer::PrepaidCustomer():CustomerBase()
{
    
}

PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string num,double bal):CustomerBase(id,name,num,bal)
{
    
}

PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string num):CustomerBase(id,name,num)
{
    
}

void PrepaidCustomer::recharge(double x)
{
    double m_balance = getBalance();
    m_balance += x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void PrepaidCustomer::credit(double x)
{
    double m_balance = getBalance();
    m_balance += x;
    std::cout<<"Current Balance: "<<m_balance<<std::endl;
}

void PrepaidCustomer::makeCall(double x)
{
    if(x>0.0)
    {
        std::cout<<"Allowed to make call"<<std::endl;
    }
    else{
        std::cout<<"Balance not sufficient"<<std::endl;
    }
}

double PrepaidCustomer::getBalance() const
{
    return m_balance;
}

void PrepaidCustomer::dispay() const
{
    
    std::cout<<"Current Balance: "<<getBalance()<<std::endl;
}
