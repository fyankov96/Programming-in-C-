#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>

using namespace std;

class BankAccount
{

private:
  int number;
  string owner;
  double balance;

public:
  BankAccount(int number, string owner, double balance);
  
  double getBalance() const;
  int getNumber() const;
  const string getOwner() const;

  void print() const;

  bool transferMoney(BankAccount &to, double value);

  bool wrongTrasferMoney(BankAccount to, double value);

  bool withdraw(double value);

  bool deposit(double value);


};

#endif /* BANKACCOUNT_H_ */
