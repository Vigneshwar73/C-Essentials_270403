#include "Engineer.h"

Engineer::Engineer():Employee(),m_projCode(0)
{

}

Engineer::Engineer(std::string id, std::string name, double salary, int exp, int code):Employee(id,name,salary,exp),m_projCode(code)
{
    
}

void Engineer::payroll()
{
    double m_salary = Employee::getSalary();
    std::cout<<"Salary: "<<m_salary<<std::endl;
}

void Engineer::appraisal()
{
    double m_salary = Employee::getSalary();
    m_salary = m_salary+(m_salary*5/100);
    std::cout<<"Appraisal: "<<m_salary<<std::endl;
}

void Engineer::display()
{
    Employee::display();
    std::cout<<"Engineer Project code: "<<m_projcode<<std::endl;
}
