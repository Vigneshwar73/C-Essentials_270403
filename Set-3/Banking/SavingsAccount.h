#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include"AccountBase.h"

class SavingsAccount : public AccountBase {
  public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  void debit(double);
  void credit(double);
  void display() const;
};

#endif // SAVINGSACCOUNT_H
