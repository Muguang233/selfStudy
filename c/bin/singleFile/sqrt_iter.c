#include <stdio.h>
#include <math.h>
double sqrt_iterative(double a) {
  double x0 = a;      
  double x1 = 0.0;    
  double diff = 1.0; 

  while (fabs(diff) >= 1e-5) {  
      x1 = (x0 + a / x0) / 2;  
      diff = x1 - x0;           
      x0 = x1;                  
  }

  return x0;
}

int main() {
  double a;
  scanf("%lf", &a);

  double result = sqrt_iterative(a);
  printf("%.3lf\n", result);

  return 0;
}