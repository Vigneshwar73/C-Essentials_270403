#ifndef POSTPAIDCUSTOMER_H
#define POSTPAIDCUSTOMER_H


class PostpaidCustomer : public CustomerBase {
  void billPay(double);
  int m_billDate;
  public:
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double,int);
  PostpaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void dispay() const;
};

#endif // POSTPAIDCUSTOMER_H
