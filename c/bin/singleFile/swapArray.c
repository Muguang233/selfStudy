#include <stdio.h>

int main() {
  int arr[3][3];
  for (int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      scanf(" %d", &arr[j][i]);
    }
  }
  for (int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d", arr[i][j]);
      j == 2 ? printf("\n") : printf(" ");
    }
  }

  return 0;
}