#include <stdio.h>

#define max(a, b, c) ({ \
  (a) >= (b) ? (a) >= (c) ? a : c : (b) >= (c) ? b : c ; \
})



double max_func(double a, double b, double c) {
  double r = a >= b? a : b;
  r = r >= c? r : c;
  return r;
}

int main() {
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);

  double result_func = max_func(a, b, c);
  double result_macro = max(a, b, c);
  printf("%.3lf\n%.3lf\n", result_func, result_macro);
  return 0;
}