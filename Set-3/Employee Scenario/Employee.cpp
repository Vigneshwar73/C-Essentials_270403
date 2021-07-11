#include "Employee.h"

Employee::Employee():m_empid(""),m_name(""),m_salary(0.0),m_exp(0)
{

}

Employee::Employee(std::string id, std::string name, double salary, int exp)
:m_empid(id), m_name(name),m_salary(salary), m_exp(exp)
{

}

virtual void Employee::display()
{
    std::cout<<"Employee ID: "<<m_empid<<std::endl;
    std::cout<<"Employee Name: "<<m_name<<std::endl;
    std::cout<<"Employee Salary: "<<m_salary<<std::endl;
    std::cout<<"Employee Experience: "<<m_exp<<std::endl;
}
