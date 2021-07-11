#include "Currency.h"

Currency::Currency():m_rupees(0),m_paise(0)
{
    //ctor
}

Currency::Currency(int a , int b):m_rupees(a),m_paise(b)
{

}

Currency::Currency(int a):m_rupees(a)
{

}

Currency Currency::operator+(const Currency& obj)
{
    Currency c;
    int x;
    x = m_paise+obj.m_paise;
    c.m_paise = x%100;
    c.m_rupees = (x/100)+m_rupees+obj.m_rupees;
    return c;
}

Currency Currency::operator-(const Currency& obj)
{
    Currency c;
    int a = (m_rupees*100)+m_paise;
    int b = (obj.m_rupees*100)+obj.m_paise;
    int x = a-b;
    c.m_paise = x%100;
    c.m_rupees = x/100;
    return c;
}

Currency Currency::operator+(int x)
{
    Currency c;
    c.m_rupees = m_rupees+x;
    c.m_paise = m_paise;
    return c;
}

Currency Currency::operator-(int x)
{
    Currency c;
    c.m_rupees = m_rupees-x;
    c.m_paise = m_paise;
    return c;
}

Currency& Currency::operator++() //pre-increment
{
    ++this->m_rupees;
    return *this;
}

Currency Currency::operator++(int a) //post increment
{
    Currency c(*this);
    this->m_rupees++;
    return c;
}

bool Currency::operator==(const Currency& obj)
{
    if(m_rupees==obj.m_rupees)
    {
        if(m_paise == obj.m_paise)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

bool Currency::operator<(const Currency& obj)
{
    int a = (m_rupees*100)+m_paise;
    int b = (obj.m_rupees*100)+obj.m_paise;
    if (a<b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Currency::operator>(const Currency& obj)
{
    int a = (m_rupees*100)+m_paise;
    int b = (obj.m_rupees*100)+obj.m_paise;
    if (a>b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Currency::display() const
{
    std::cout<<"Currency: "<<m_rupees<<" rupees "<<m_paise<<"paise"<<std::endl;
}

std::ostream& operator<<(std::ostream &out, const Currency& c)
{
    out<<" Currency: "<<c.m_rupees<<" Rupees"<<c.m_paise<<" Paise";
    return out;
}
