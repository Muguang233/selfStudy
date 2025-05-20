#include <iostream>
using namespace std;

struct william {
  string name;
  int diameter;
  double weight;
};

int main() {
  struct william will;
  cout << "Enter the diameter of the pizza: ";
  cin >> will.diameter;
  cout << "Enter the weight of their pizza: ";
  cin >> will.weight;
  cout << "Enter the name of company: ";
  cin >> will.name;
  //todo
  return 0;
}