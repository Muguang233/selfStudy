#include <stdio.h>
#include <ctype.h>
int main () {
  int c;
  while((c = getchar()) != EOF) {
    if(isalpha(c)) {
      switch (c)
      {
      case 'Z':
        printf("A");
        break;
      case 'z':
        printf("a");
        break;
      default:
        printf("%c", c+1);
        break;
      }
      continue;
    }
    putchar(c);
  }
  return 0;
}