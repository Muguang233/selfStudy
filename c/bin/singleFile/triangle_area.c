#include <stdio.h>
#include <math.h>
#define area(a, b, c, type) ({ \
    type s = (a + b + c) / 2; \
    sqrt(s * (s - a) * (s - b) * (s - c)); \
})

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  double result = area(a, b, c, double);
  printf("%.3lf\n", result);
  return 0;
}