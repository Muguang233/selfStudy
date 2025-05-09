#include  <iostream>
#include <iomanip>
using namespace std;

double factorial(int n) {
  double sum = 1.0;
  for (int i = 1; i <= n; i++)
  {
    sum *= i;
  }
  return sum;
}

int main() {
  double res = 0;
  for(int i = 1; i <= 30; i++) {
    res += factorial(i);
  }
  printf("%.2e\n", res);
  return 0;
}