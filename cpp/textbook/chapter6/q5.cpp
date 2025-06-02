#include <iostream>
using namespace std;

int main() {
  double wage;

  while(cin >> wage) {
    if(wage < 0) {
      cout << "exit";
      break;
    }
    if(wage <= 5000) {
      cout << "your tax is 0 in unit of tvarp\n";
    } else if (wage <=15000) {
      cout << "your tax is 1000 in unit of tvarp\n";
    } else if (wage <=35000) {
      cout << "your tax is 4000 in unit of tvarp\n";
    } else {
      double tax = 4000 + (wage - 35000) * 0.2;
      cout << "your tax is " << tax << " in unit of tvarp\n";
    }
  }
  return 0;
}