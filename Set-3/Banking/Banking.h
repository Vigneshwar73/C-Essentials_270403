#ifndef BANKING_H
#define BANKING_H

class AccountBase {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  AccountBase();
  AccountBase(std::string,std::string,double);
  AccountBase(std::string,std::string);
  AccountBase(const Account&);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void dispay() const = 0;
  double getBalance() const;
};


class CreditAccount : public AccountBase {
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  void debit(double);
  void credit(double);
  void dispay() const;
};

#endif // BANKING_H
