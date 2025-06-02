#ifndef BANK_H
#define BANK_H
#include <iostream>
using namespace std;

class Bank {
private:
  string name;
  string accountNumber;
  double balance;
public:
  Bank(string n, string accNum, double bal = 0.0);
  void deposit(double amount);
  void withdraw(double amount);
  void display();
};

#endif 