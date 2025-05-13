#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int m[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      scanf(" %d", &m[i][j]);
    }
  } 
  int sum = 0;
  int index = n-1;
  for(int i = 0; i < n; i++) {
    sum += m[i][i] + m[i][index];
    index--;
  }
  if((n%2) != 0) {
    int k = n/2;
    sum -= m[k][k];
  }
  printf("%d\n", sum);
  return 0;
}