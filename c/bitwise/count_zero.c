#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int count_zero(uint32_t value);

int main (int argc, char *argv[]) {
  if (argc == 0) return 0;
  int input = atoi(argv[1]);
  printf("%d\n", count_zero(input));
  return 0;
}

int count_zero(uint32_t value) {
  int count = 0;
  for(int i = 0; i < 32; i++) {
    if (!((value >> i) & 1)) count++;
  }
  return count;
}