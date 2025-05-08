#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
  char buffer[100];
  fgets(buffer, 100, stdin);
  int count = 0;
  for(int i = 0; buffer[i] != '\0'; i++) {
    if(isalpha(buffer[i])) count++;
  }
  printf("%d\n", count);
  return 0;
}