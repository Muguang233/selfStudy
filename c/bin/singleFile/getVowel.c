#include <stdio.h>

int main() {
  int c;
  while((c = getchar()) != EOF) {
    switch (c)
    {
    case 'a':
      printf("%c", c);
      break;
    case 'e':
      printf("%c", c);
      break;
    case 'i':
      printf("%c", c);
      break;
    case 'o':
      printf("%c", c);
      break;
    case 'u':
      printf("%c", c);
      break;
    default:
      break;
    }
  }
  return 0;
}