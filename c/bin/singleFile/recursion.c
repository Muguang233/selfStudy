#include<stdio.h>
int recursion(int n) {
  if(n <= 3) return n;
  return recursion(n-1) + recursion(n-3);
}

int main() {
  int n;
  while(scanf("%d", &n) != EOF) {
    if(n == 0) break;
    printf("%d\n", recursion(n));
  }
  return 0;
}