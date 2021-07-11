#ifndef ENGINEER_H
#define ENGINEER_H
#include"Employee.h"

class Engineer : public Employee
{
  int m_projCode;
  public:
  Engineer(std::string id, std::string name,double salary,int exp,int code);
  void payroll();
  void appraisal();
  void display();
};

#endif // ENGINEER_H
