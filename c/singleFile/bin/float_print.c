#include <stdio.h>

int main() {
  float input;
  scanf("%f", &input);
  for(int i = 1; i <= 3; i++) {
    for(int j = 1; j <= i; j++) {
      j == i ? printf("%6.2f\n", input) : printf("%6.2f ", input);
    }
  }
  return 0;
}