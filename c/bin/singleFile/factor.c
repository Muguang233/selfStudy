#include <stdio.h>

int main () {
  for(int i = 10; i <= 1000; i++) {
    if (((i%2)+(i%3)+(i%7)) == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}