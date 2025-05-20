#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_BUFFER 99999

void delete(char *buffer, char ch) {
    int len = strlen(buffer);
    for (int i = 0; i < len; i++) {
        if (buffer[i] == ch) {
            for (int j = i; j < len; j++) {
                buffer[j] = buffer[j + 1];
            }
            return;
        }
    }
}

void insert(char *buffer, char c1, char c2) {
  int len = strlen(buffer);
  if (len + 1 >= MAX_BUFFER) {
    return;
  }

  int index = -1;
  for (int i = len - 1; i >= 0; i--) { 
    if (buffer[i] == c1) {
      index = i;
      break;
    }
  }

  if (index == -1) {
    return;
  }

  for (int i = len; i >= index; i--) {
    buffer[i + 1] = buffer[i];
  }
  buffer[index] = c2; 
}
// helllo 
// I l a
// hellalo

void replace(char *buffer, char c1, char c2) {
  bool found = false;
  int len = strlen(buffer);
  for (int i = 0; i < len; i++) { 
    if (buffer[i] == c1) {
      buffer[i] = c2;
      found = true;
    }
  }
}

int main() {
  char buffer[MAX_BUFFER];
  fgets(buffer, MAX_BUFFER, stdin);
  buffer[strcspn(buffer, ".")] = '\0';
  strcat(buffer, ".");
  char cmd;
  scanf("%c", &cmd);
  char c1, c2;
  switch (cmd)
  {
  case 'D':
    scanf(" %c", &c1);
    delete(buffer, c1);
    break;
  case 'I':
    scanf(" %c %c", &c1, &c2);
    insert(buffer, c1, c2);
    break;
  case 'R':
    scanf(" %c %c", &c1, &c2);
    replace(buffer, c1, c2);
    break;
  default:
    break;
  }
  printf("%s\n", buffer);
  return 0;
}