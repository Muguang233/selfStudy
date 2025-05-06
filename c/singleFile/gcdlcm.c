#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);
int main() {
  int a, b, max, min;
  scanf("%d %d", &a, &b);
  if(a > b) {
    max = a;
    min = b;
  } else {
    max = b;
    min = a;
  }
  int gcd_result = gcd(max, min);
  int lcm_result = lcm(max, min);
  printf("%d\n%d\n", gcd_result, lcm_result);
  return 0;
}

int gcd(int a, int b) {
  return b>0?gcd(b, a%b):a;
}

int lcm(int a, int b) {
  return a*b/gcd(a, b);
}