#include <stdio.h>
#include <string.h>
#define MAX_BUFFER 999999

int main() {
  char s1[MAX_BUFFER], s2[MAX_BUFFER];
  fgets(s1, MAX_BUFFER, stdin);
  fgets(s2, MAX_BUFFER, stdin);
  s1[strcspn(s1, "\n")] = '\0';
  s2[strcspn(s2, "\n")] = '\0';
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  int c = 0;
  if(l1 > l2) c++;
  if(l1 < l2) l2 = l1;
  for(int i = 0; i < l2; i++) {
    if(s1[i] != s2[i]) c++;
  }
  printf("%d\n", c);
  return 0;
}