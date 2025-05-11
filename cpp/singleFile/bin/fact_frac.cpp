#include <iostream>
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
  int n;
  cin >> n;
  double sum = 0;
  for(int i = 1; i <= n; i++) {
    sum += 1 / factorial(i);
  }
    
  printf("sum=%.5lf\n", sum);
  return 0;
}

//0.2 + 0.25 + 0.33 + 0.5 + 1