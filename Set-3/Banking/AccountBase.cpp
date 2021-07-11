#include "AccountBase.h"

AccountBase::AccountBase()
:m_accNumber(""),m_accName(""),m_balance(0.0)
{
    //ctor
}

AccountBase::AccountBase(std::string num, std::string name, double bal)
:m_accNumber(num), m_accName(name), m_balance(bal)
{

}

AccountBase::AccountBase(std::string num, std::string name)
:m_accNumber(num), m_accName(name), m_balance(0.0)
{

}

AccountBase::AccountBase(const AccountBase& obj)
:m_accNumber(obj.m_accNumber),m_accName(obj.m_accName),m_balance(obj.m_balance)
{

}

double AccountBase::getBalance() const
{
    return m_balance;
}

