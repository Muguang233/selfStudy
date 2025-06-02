#include <iostream>
#include <stack>
#include <string>
/* Write a program that adds and removes customer structures from a stack, repre
sented by a Stack class declaration. Each time a customer is removed, his or her
 payment should be added to a running total, and the running total should be
 reported. Note:You should be able to use the Stack class unaltered;just change the
 typedef declaration so that Item is type customer instead of unsigned long.*/
using namespace std;

struct customer {
    string name;
    double payment;
};

int main() {
  double total_payment = 0.0;
  stack<customer> customer_stack;
  char choice;
  do {
    customer c;
    cout << "Enter customer name: ";
    cin >> c.name;
    cout << "Enter payment amount: ";
    cin >> c.payment;

    customer_stack.push(c);
    cout << "Customer added to stack." << endl;

    cout << "Do you want to add another customer? (y/n): ";
    cin >> choice;
  } while (choice == 'y' || choice == 'Y');
  cout << endl;
  cout << "Processing customers..." << endl;
  while (!customer_stack.empty()) {
    customer c = customer_stack.top();
    customer_stack.pop();
    total_payment += c.payment;
    cout << "Processed customer: " << c.name << ", Payment: $" << c.payment << endl;
  }
  cout << "Total payment received: $" << total_payment << endl;
  return 0;
}