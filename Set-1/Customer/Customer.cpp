#include "Customer.h"

Customer::Customer()
:m_custId("0"),m_custName(" "),m_phone("0"),m_balance(0.0),m_type(AccountType::Prepaid)
{

}

Customer::Customer(std::string x,std::string y,std::string z,double w)
:m_custId(x),m_custName(y),m_phone(z),m_balance(w),m_type(AccountType::Prepaid)
{

}

Customer::Customer(std::string x, std::string y, std::string z)
:m_custId(x),m_custName(y),m_phone(z),m_balance(0.0),m_type(AccountType::Postpaid)
{

}

Customer::Customer(const Customer& obj)
:m_custId(obj.m_custId),m_custName(obj.m_custName),m_phone(obj.m_phone),m_balance(obj.m_balance),m_type(obj.m_type)
{

}

void Customer::credit(double d)
{
    m_balance += d;
}

void Customer::makeCall(double d)
{
    if(m_type == AccountType::Prepaid)
    {
        if(d>0)
        {
            std::cout<<"Prepaid - Allowed to make call"<<std::endl;
        }
        else
        {
            std::cout<<"Prepaid - Not enough balance"<<std::endl;
        }

    }
    else
    {
        std::cout<<"Postpaid - Allowed to make call"<<std::endl;
    }
}

double Customer::getBalance() const
{
    return m_balance;
}

void Customer::display() const
{
    std::cout<<"Customer ID: "<<m_custId<<std::endl;
    std::cout<<"Customer Name: "<<m_custName<<std::endl;
    std::cout<<"Customer Phone Number: "<<m_phone<<std::endl;
    std::cout<<"Customer Balance: "<<m_balance<<std::endl;
}




