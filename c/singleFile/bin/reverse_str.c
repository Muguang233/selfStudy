#include <stdio.h>
#include <string.h>
void reverse_string(char *str) {
  int len = strlen(str);
  int i = 0;
  int j = 0;
  char temp;
  
  for (i = 0; i < len; i++) {
      if (str[i] != ' ') {
          str[j++] = str[i];
      }
  }
  str[j] = '\0'; 
  len = j; 
  for (i = 0; i < len / 2; i++) {
      temp = str[i];
      str[i] = str[len - i - 1];
      str[len - i - 1] = temp;
  }
}
int main() {
  char buffer[100];
  fgets(buffer, 100, stdin);
  buffer[strcspn(buffer, "\n")] = '\0';
  reverse_string(buffer);
  printf("%s\n", buffer);
  return 0;
}