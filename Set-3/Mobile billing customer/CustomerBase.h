#ifndef CUSTOMERBASE_H
#define CUSTOMERBASE_H


enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  AccountType m_type;
 public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const CustomerBase&);
  void credit(double)=0;           //recharge or billPay
  void makeCall(double)=0;
  double getBalance() const;
  void dispay() const=0;
};

#endif // CUSTOMERBASE_H
