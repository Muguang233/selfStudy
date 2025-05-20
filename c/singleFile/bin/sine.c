#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 999999

void fill_brac(char *str, int n) {
  for(int i = 0; i < n; i++) strcat(str, ")");
}

void An(char *str, int n) {
  if(n == 1) {
    strcat(str, "sin(1");
    return;
  }
  char temp[MAX_BUFFER] = "";
  if(n & 1) {
    An(temp, n-1);
    sprintf(str, "%s%s%d", temp, "+sin(", n);
  } else {
    An(temp, n-1);
    sprintf(str, "%s%s%d", temp, "-sin(", n);
  }
}

void Sn(char *str, int n, int count) {
  if(n == 1) {
    char temp[MAX_BUFFER] = "";
    An(temp, n);
    fill_brac(temp, n);
    char half[MAX_BUFFER];
    sprintf(half, "+%d)", count);
    strcat(temp, half);
    strcat(str, temp);
    return;
  }
  char A[MAX_BUFFER];
  An(A, n);
  fill_brac(A, n);
  char prev[MAX_BUFFER];
  Sn(prev, n-1, count+1);
  char other[MAX_BUFFER];
  sprintf(other, "+%d)", count);
  strcat(str, prev);
  strcat(str, A);
  strcat(str, other);
}

int main() {
  int n;
  scanf("%d", &n);
  char buffer[MAX_BUFFER] = "";
  for(int i = 0; i < n-1; i++){
    strcat(buffer, "(");
  }
  if(n > 1) {
    Sn(buffer, n-1, 2);
  }
  char ending[MAX_BUFFER] = "";
  An(ending, n);
  fill_brac(ending, n);
  strcat(ending, "+1");
  strcat(buffer, ending);
  printf("%s\n", buffer);
  return 0;
}