#include <stdio.h>
#include <string.h>
#define MAX_BUFFER 999999
int main() {
  char buffer[MAX_BUFFER];
  int s, e;
  fgets(buffer, MAX_BUFFER, stdin);
  buffer[strcspn(buffer, "\n")] = '\0';
  scanf("%d %d", &s, &e);
  int l = strlen(buffer);
  for(int i = s; i < l; i+=e) {
    printf("%c", buffer[i]);
  }
  printf("\n");
  return 0;
}