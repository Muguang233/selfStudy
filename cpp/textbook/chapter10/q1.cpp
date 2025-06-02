#include <iostream>
#include "bank.h"
using namespace std;

int main() {
  Bank account("张三", "123456789", 1000.0);
  account.display();
  account.deposit(500.0);
  account.withdraw(200.0);
  account.display();
  account.withdraw(1500.0); 
  account.withdraw(-100.0);
  account.display();
  account.deposit(-50.0);
  account.display();
  account.withdraw(1000.0);
  account.display();
  account.withdraw(500.0);
  account.display();
  account.withdraw(100.0);
  account.display();
  account.withdraw(50.0);
  account.display();
  return 0 ;
}