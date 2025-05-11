#include <stdio.h>

int main() {
  int a = 2;
  int n;
  int term = a;
  int sum = 0;
  scanf(" %d", &n);
  for (int i = 0; i < n; i++) {
    sum += term;
    term = term * 10 + a;
  }
  printf("%d\n", sum);
  return 0;
} 