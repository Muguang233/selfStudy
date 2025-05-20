#include <stdio.h>
#include <string.h>
int main() {
  int n, m;
  scanf("%d", &n);
  char buffer[n+1];
  for(int i = 0; i < n; i++) {
    scanf(" %c", &buffer[i]);
  }
  buffer[n] = '\0';
  scanf(" %d", &m);
  char result[n+1-m];
  for(int i = m-1; i < n; i++) {
    result[i-m+1] = buffer[i];
  }
  result[n-m+1] = '\0';
  printf("%s\n", result);
  return 0;
}