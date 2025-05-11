#include <stdio.h>

int main() {
  int input[10];
  for(int i = 0; i < 10; i++) {
    scanf(" %d", &input[i]);
  }
  for(int i = 9; i >= 0; i--) {
    printf("%d", input[i]);
    if(i != 0) printf(" ");
  }
  printf("\n");
  return 0; 
}