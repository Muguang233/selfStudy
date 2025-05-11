#include <stdio.h>

int ctof(int c) {
  int result = 32 + ((c*9)/5);
  return result;
}

int main() {
  for(int i = -100; i <= 150; i+=5) {
    printf("c=%d->f=%d\n", i, ctof(i));
  }
  return 0;
}