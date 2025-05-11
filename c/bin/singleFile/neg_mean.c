#include <stdio.h>

int main() {
  int input;
  int ncount = 0;
  int pcount = 0;
  int total = 0;
  for(int i = 0; i < 20; i++) {
    scanf(" %d", &input);
    if (input < 0) {
      ncount++;
    } else {
      total += input;
      pcount++;
    } 
  }
  printf("%d\n%.2lf\n", ncount, (double) total/pcount);

  return 0;
}