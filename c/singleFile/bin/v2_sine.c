#include <stdio.h>

void An(int n, int max) {
	if (n == max) {
    printf("sin(%d)", n);
    return;
  } else if (n & 1) {
    printf("sin(%d-", n);
  } else {
    printf("sin(%d+", n);
  }
	An(n + 1, max);
	printf(")");
}
//An
//1 sin(1)
//2 sin(1-sin(2))
//3 sin(1-sin(2+sin(3)))
//4 sin(1-sin(2+sin(3-sin(4))))

void Sn(int n, int max) {
  if(max == 1) {
    An(1, n);
    printf("+%d", max);
    return;
  }
  if(n == 1) {
    An(1, n);
    printf("+%d)", max);
    return;
  }
  printf("(");
  Sn(n - 1, max);
  if(n == max) {
    An(1, n);
    printf("+%d", max + 1 - n);
  } else {
    An(1, n);
    printf("+%d)", max + 1 - n);
  }
} 

int main() {
  int n;
  scanf("%d", &n);
  Sn(n, n);
	printf("\n");
  return 0;
}