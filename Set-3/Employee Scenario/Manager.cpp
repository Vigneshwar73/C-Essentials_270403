#include "Manager.h"



Manager::Manager():m_projCode(0),m_reportees(0)
{

}

Manager::Manager(std::string id, std::string name,double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp),m_projCode(code),m_reportees(reprtees)
{
   
}

void Manager::payroll()
{
    double m_salary = Employee::getSalary();
    std::cout<<"Salary: "<<m_salary<<std::endl;

}

void Manager::appraisal()
{
    double m_salary = Employee::getSalary();
    m_salary = m_salary+(m_salary*10/100);
    std::cout<<"Appraisal: "<<m_salary<<std::endl;
}

void Manager::display()
{
    Employee::display();
    std::cout<<"Manager Project code: "<<m_projcode<<std::endl;
    std::cout<<"Number of reportees: "<<m_reportees<<std::endl;
}
