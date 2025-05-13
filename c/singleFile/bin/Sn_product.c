#include <stdio.h>

long long factorial(int x) {
  long long res = 1;
  for (int i = 1; i <= x; i++) {
      res *= i;
  }
  return res;
}

int main() {
  int n;
  scanf("%d", &n);
  long long sum = 0;
  for (int i = 1; i <= n; i++) {
      sum += factorial(i);
  }
  printf("%lld\n", sum);
  return 0;
}