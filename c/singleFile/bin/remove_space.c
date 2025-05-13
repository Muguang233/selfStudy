#include <stdio.h>
#include <ctype.h>

int main() {
  int c;
  while((c = fgetc(stdin)) != EOF) {
    if(isspace(c)) {
      if(c == '\n') putchar(c);
      continue;
    }
    putchar(c);
  }
  return 0;
}