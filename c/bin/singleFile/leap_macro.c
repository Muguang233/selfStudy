#include <stdio.h>
#include <stdbool.h>
#define LEAP_YEAR(y) ({\
    (((year) % 400 == 0) ? true : \
    ((year) % 100 == 0) ? false : \
    ((year) % 4 == 0) ? true : false); \
  })

int main() {
  int year;
  scanf("%d", &year);
  LEAP_YEAR(year) ? printf("L\n") : printf("N\n");
  
  return 0;
}