#include "CustomerBase.h"

CustomerBase::CustomerBase():m_custId(""),m_custName(""),m_phone(""),m_balance(0.0),m_type(AccountType::Prepaid)
{
    //ctor
}

CustomerBase::CustomerBase(std::string id,std::string name ,std::string num,double bal)
:m_custId(id),m_custName(name),m_phone(num),m_balance(bal),m_type(AccountType::Prepaid)
{

}

CustomerBase::CustomerBase(std::string id,std::string name,std::string num)
:m_custId(id),m_custName(name),m_phone(num),m_balance(0.0),m_type(AccountType::Postpaid)
{

}

CustomerBase::CustomerBase(const CustomerBase& obj)
:m_custId(obj.m_custId),m_custName(obj.m_custName),m_phone(obj.m_phone), m_balance(obj.m_balance),m_type(obj.m_type)
{

}

double CustomerBase::getBalance() const
{
    return m_balance;
}
