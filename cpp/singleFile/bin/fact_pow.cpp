#include <iostream>
#include <iomanip>
using namespace std;

double fact(int n) {
  double sum = 1.0;
  for (int i = 1; i <= n; i++)
  {
    sum *= i;
  }
  return sum;
}

double mypow(double x, int n) {
  double prod = 1.0;
  for (int i = 0; i < n; i++)
  {
    prod *= x;
  }
  return prod;
}

int main() {
  double x;
  int n;
  cin >> x >> n;
  double res = x;
  for(int i = 2; i <= n; i++) {
    if(i%2 == 0) res -= mypow(x, i) / fact(i);
    if(i%2 != 0) res += mypow(x, i) / fact(i);
  }
  printf("%.4lf\n", res);
  return 0;
}