#include<stdio.h>

int is_alphabet(int c) {
  if(c >= 65 && c <= 90) return 1;
  if(c >= 97 && c <= 122) return 1;
  return 0;
}

int main() {
  int a_count = 0;
  int num_count = 0;
  int space = 0;
  int other = 0;
  char c;
  while ((c = getchar()) != EOF) {
    if(c == '\n') break;
    if(is_alphabet(c)) { a_count++; continue; }
    if(c >= 48 && c <=57) { num_count++; continue; }
    if(c == 32) { space++; continue; }
    other++;
  }
  printf("%d %d %d %d\n", a_count, num_count, space, other);

  return 0;
}