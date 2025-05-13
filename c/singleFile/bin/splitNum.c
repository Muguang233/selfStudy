#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int arr[4];
  arr[0] = x/1000;
  arr[1] = x/100 % 10;
  arr[2] = x/10 % 10;
  arr[3] = x%10;
  for(int i = 0; i < 4; i++) {
    i == 3 ? printf("%d\n", arr[i]) : printf("%d ", arr[i]); 
  }
  return 0;
}