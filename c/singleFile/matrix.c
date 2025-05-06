#include <stdio.h>

int main() {
  int mat[3][3];
  for(int i = 0; i < 3; i++) {
    scanf(" %d %d %d", &mat[i][0], &mat[i][1], &mat[i][2]);
  }
  int sum1 = 0;
  int sum2 = 0;
  int j = 2;
  for(int i = 0; i < 3; i++) {
    sum1 += mat[i][i];
    sum2 += mat[i][j];
    j--;
  }
  printf("%d %d\n", sum1, sum2);
  return 0;
}