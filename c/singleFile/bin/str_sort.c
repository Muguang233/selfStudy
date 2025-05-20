#include <stdio.h>
#include <string.h>
#define MAX_BUFFER 1000

int main() {  
  char buffer[3][MAX_BUFFER];
  for(int i = 0; i < 3; i++) {
    fgets(buffer[i], MAX_BUFFER, stdin);
    buffer[i][strcspn(buffer[i], "\n")] = '\0';
  }
  char temp[MAX_BUFFER];
  for (int i = 0; i < 2; i++) {
      for (int j = i + 1; j < 3; j++) {
          if (strcmp(buffer[i], buffer[j]) > 0) {
            strcpy(temp, buffer[i]);
            strcpy(buffer[i], buffer[j]);
            strcpy(buffer[j], temp);
          }
      }
  }
  for(int i = 0; i < 3; i++) printf("%s\n", buffer[i]);
  return 0; 
}