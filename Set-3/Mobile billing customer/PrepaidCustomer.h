#ifndef PREPAIDCUSTOMER_H
#define PREPAIDCUSTOMER_H


class PrepaidCustomer : public CustomerBase {
  void recharge(double);
  public:
  PrepaidCustomer();
  PrepaidCustomer(std::string,
     std::string,std::string,double);
  PrepaidCustomer(std::string,
     std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void dispay() const;
};

#endif // PREPAIDCUSTOMER_H
