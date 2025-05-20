#include <iostream>
using namespace std;

double fahrenheit(int celsius) {
  return (celsius * 1.8) + 32;
}

int main() {
  cout << "Please enter a Celsius value: ";
  int c;
  cin >> c;
  double f = fahrenheit(c);
  cout << c << "degrees Celsius is " << f << "degrees Fahrenheit." << endl;
  return 0;
}