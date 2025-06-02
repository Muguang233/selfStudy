#include <iostream>
#include "bank.h"
using namespace std;

  Bank::Bank(string n, string accNum, double bal) 
    : name(n), accountNumber(accNum), balance(bal) {}

  void Bank::deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "存入: " << amount << endl;
    } else {
      cout << "存款数额必须大于0." << endl;
    }
  }

  void Bank::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "取出: $" << amount << endl;
    } else if (amount > balance) {
      cout << "余额不足." << endl;
    } else {
      cout << "数额需大于0." << endl;
    }
  }

  void Bank::display() {
    cout << "账户持有者: " << name << endl;
    cout << "账号: " << accountNumber << endl;
    cout << "余额: $" << balance << endl;
  }