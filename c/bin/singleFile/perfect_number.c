#include <stdio.h>

void get_perfect(int n) {
  int factor[100];
  int count = 0;
  int sum = 0;
  for (int i = 1; i <= n/2; i++) {
    if(n%i == 0) {
      factor[count] = i;
      sum += i;
      count++;
    }
  }
  if(sum == n) {
    printf("%d its factors are ", n);
    for(int i = 0; i < count; i++) i == count-1 ? printf("%d\n", factor[i]) : printf("%d ", factor[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    get_perfect(i);
  }
  
  return 0;
}