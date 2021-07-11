#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include"AccountBase.h"

class CreditAccount : public AccountBase {
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  void debit(double);
  void credit(double);
  void display() const;
};
#endif // CREDITACCOUNT_H
