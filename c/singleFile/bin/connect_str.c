#include <stdio.h>
#include <string.h>
int main() {
  char buffer1[100];
  char buffer2[100];
  fgets(buffer1, 100, stdin);
  fgets(buffer2, 100, stdin);
  buffer1[strcspn(buffer1, "\n")] = '\0';
  buffer2[strcspn(buffer1, "\n")] = '\0';
  strcat(buffer1, buffer2);
  printf("%s\n", buffer1);
  return 0;
} 