#include "Distance.h"

Distance::Distance():m_feets(0),m_inches(0)
{
    //ctor
}

Distance::Distance(int a,int b):m_feets(a),m_inches(b)
{

}

Distance::Distance(int a):m_feets(a), m_inches(a)
{

}

Distance Distance::operator+(const Distance& obj)
{
    Distance d;
    int a;
    a = m_inches+obj.m_inches;
    d.m_inches = a%12;
    d.m_feets = (a/12)+m_feets+obj.m_feets;
    return d;
}

Distance Distance::operator-(const Distance& obj)
{
    Distance d;
    int a = (m_feets*12)+m_inches;
    int b = (obj.m_feets*12)+obj.m_inches;
    int x = a-b;
    d.m_inches = x%12;
    d.m_feets = x/12;
    return d;
}

Distance Distance::operator+(int a)
{
    int ft, in;
    in = this->m_inches;
    ft = this->m_feets + a;
    return Distance(ft,in);
}

Distance Distance::operator-(int a)
{
    Distance d;
    d.m_inches = m_inches;
    d.m_feets = m_feets - a;
    return d;
}

Distance& Distance::operator++()
{
    ++this->m_feets;
    return *this;
}

Distance Distance::operator++(int a)
{
    Distance temp(*this);
    this->m_feets++;
    return temp;
}

bool Distance::operator==(const Distance& obj)
{
    if(m_feets==obj.m_feets)
    {
        if(m_inches==obj.m_inches)
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

bool Distance::operator<(const Distance& obj)
{
    int a = (m_feets*12)+m_inches;
    int b = (obj.m_feets*12)+obj.m_inches;
    if(a<b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Distance::operator>(const Distance& obj)
{
    int a = (m_feets*12)+m_inches;
    int b = (obj.m_feets*12)+obj.m_inches;
    if(a>b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Distance::display() const
{
    std::cout<<"Distance is: "<<m_feets<<" ft "<<m_inches<<" in "<<std::endl;
}

std::ostream& operator<<(std::ostream &out, const Distance& d)
{
    out<<" Distance is: "<<d.m_feets<<" ft "<<d.m_inches<<" in ";
    return out;
}
