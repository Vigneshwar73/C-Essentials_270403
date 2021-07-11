#include "MyTime.h"

MyTime::MyTime()
:m_hours(0),m_minutes(0),m_seconds(0)
{

}

MyTime::MyTime(int a, int b, int c)
:m_hours(a),m_minutes(b),m_seconds(c)
{

}

MyTime::MyTime(int a, int b)
:m_hours(a),m_minutes(b)
{

}

MyTime MyTime::operator+(const MyTime& obj)
{
    MyTime t;
    int m,s;
    s = m_seconds+obj.m_seconds;
    t.m_seconds = s%60;
    m = (s/60)+m_minutes+obj.m_minutes;
    t.m_minutes = m%60;
    t.m_hours = (m/60)+m_hours+obj.m_hours;
    //t.m_hours = t.m_hours%12;
    return t;

}
MyTime MyTime::operator+(int a)
{
    MyTime t;
    int m,s;
    s = m_seconds+a;
    t.m_seconds = s%60;
    m = (s/60)+m_minutes+a;
    t.m_minutes = m%60;
    t.m_hours = (m/60)+m_hours+a;
    t.m_hours = t.m_hours%12;
    return t;

}

MyTime MyTime::operator-(const MyTime& obj)
{
    MyTime t;
    int a , b, x;
    a = (m_hours*60*60)+(m_minutes*60)+m_seconds;
    b = (obj.m_hours*60*60)+(obj.m_minutes*60)+obj.m_seconds;
    x = a-b;
    t.m_seconds = x%60;
    x=x/60;
    t.m_minutes = x%60;
    x=x/60;
    t.m_hours = x;
    return t;

}

MyTime MyTime::operator-(int z)
{
    MyTime t;
    int a , b, x;
    a = (m_hours*60*60)+(m_minutes*60)+m_seconds;
    b = (z*60*60)+(z*60)+z;
    x = a-b;
    t.m_seconds = x%60;
    x=x/60;
    t.m_minutes = x%60;
    x=x/60;
    t.m_hours = x;
    return t;

}

MyTime& MyTime::operator++() // pre increments hour
{
    ++this->m_hours;
    return *this;
}

MyTime MyTime::operator++(int a) // post increments hour
{
    MyTime t(*this);
    this->m_hours++;
    return t;
}

MyTime& MyTime::operator+=(const MyTime& obj)
{
    int a, b;
    a = this->m_seconds + obj.m_seconds;
    this->m_seconds = a%60;
    b = (a/60)+ this->m_minutes+obj.m_minutes;
    this->m_minutes = b%60;
    this->m_hours = (b/60)+this->m_hours+obj.m_hours;
    //this->m_hours = this->m_hours%12;
    return *this;
}

bool MyTime::operator==(const MyTime& obj)
{
    if(m_hours==obj.m_hours)
    {
        if(m_minutes==obj.m_minutes)
        {
            if(m_seconds==obj.m_seconds)
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
    else
    {
        return false;
    }
}

bool MyTime::operator<(const MyTime& obj)
{
    int a = (m_hours*60*60)+(m_minutes*60)+m_seconds;
    int b = (obj.m_hours*60*60)+(obj.m_minutes*60)+obj.m_seconds;
    if(a<b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool MyTime::operator>(const MyTime& obj)
{
    int a = (m_hours*60*60)+(m_minutes*60)+m_seconds;
    int b = (obj.m_hours*60*60)+(obj.m_minutes*60)+obj.m_seconds;
    if(a>b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MyTime::display() const
{
    std::cout<<"Time is: "<<m_hours<<"hr "<<m_minutes<<"m "<<m_seconds<<"s "<<std::endl;
}

std::ostream& operator << (std::ostream& out, const MyTime& tm)
{
    out << "Time is: " << tm.m_hours << " hour : " << tm.m_minutes << " min : " << tm.m_seconds << " sec";
    return out;
}
