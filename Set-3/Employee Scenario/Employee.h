#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include"IEmployee.h"

class Employee:public IEmployee
{
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(std::string id, std::string name, double salary,int exp);
  virtual void display();
  double getSalary();
};

#endif // EMPLOYEE_H
