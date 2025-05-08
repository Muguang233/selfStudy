#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isCap(char character){
  return character > 64 && character < 91 ? true : false;
}

int main() {
  char buffer[100];
  fgets(buffer, 100, stdin);
  //buffer[strcspn(buffer, "\n")] = '\0';
  for (size_t i = 0; buffer[i] != '\0'; i++) {
    isCap(buffer[i]) ? printf("%c", buffer[i]+32) : printf("%c", buffer[i]);
  }
  return 0;
}