#include <stdio.h>


int main() {
  int input[10];
  for(int i = 0; i < 9; i++) {
    scanf(" %d", &input[i]);
  }
  int insert;
  scanf(" %d", &insert);
  int pos = 0;
  for(int i = 0; i < 9; i++) {
    if(input[i] < insert) {
      pos++;
    }
  }
  for(int i = 9; i > pos; i--) {
    input[i] = input[i-1];
  }
  input[pos] = insert;
  for(int i = 0; i < 10; i++) {
    printf("%d\n", input[i]);
  }
  return 0;
}