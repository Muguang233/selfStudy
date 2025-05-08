#include <stdio.h>

#define swap(x, y, type) do {type temp = x; x = y; y = temp;} while(0)

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  swap(x, y, int);
  printf("%d %d\n", x, y);
  return 0;
}