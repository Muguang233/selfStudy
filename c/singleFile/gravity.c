#include <stdio.h>

int main() {
  double m, n;
  double result = 0;
  scanf(" %lf %lf", &m, &n);
  result += m;
  for (int i = 0; i < n; i++) {
    m /= 2;
    if(i != n-1) {
      result += m*2;
    }
  }
  printf("%.2lf %.2lf\n", m, result);

  return 0;
}