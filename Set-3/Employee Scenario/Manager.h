#ifndef MANAGER_H
#define MANAGER_H
#include"Employee.h"


class Manager : public Employee
{
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name,
     double salary,int exp,int code,int reprtees);
  void payroll();
  void appraisal();
  void display();
};
#endif // MANAGER_H
