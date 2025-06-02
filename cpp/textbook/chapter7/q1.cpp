#include <iostream>
using namespace std;

double harmonic(int, int);

int main() {
  int a, b;
  while(cin >> a >> b) {
    if(a == 0 || b == 0) break;
    double result = harmonic(a, b);
    cout << "Harmonic is " << result << endl;
  }
  return 0;
}

double harmonic(int a, int b) {
  return (2.0*a*b)/(a+b);
}