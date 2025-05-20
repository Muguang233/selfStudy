#include <iostream>
using namespace std;

double units(double n) {
  return n*63240;
}

int main() {
  cout << "Enter the number of light years: ";
  double n;
  cin >> n;
  double r = units(n);
  cout << n << "light years = " << r << " astronomical units." << endl;
  return 0;
}