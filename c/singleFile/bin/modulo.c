#include <stdio.h>
//#define mod(a, b) 
#define mod(a, b) (a) % (b)
int main() {
  int a,b;
  scanf("%d %d", &a, &b);
  int result = mod(a, b);
  printf("%d\n", result);

  return 0;
}