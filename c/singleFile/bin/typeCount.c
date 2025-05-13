#include <stdio.h>

int getType(int input) {
  if (input <= 57 && input >= 48) return 1;
  if (input >= 65 && input <= 90) return 2;
  if (input >= 97 && input <= 122) return 2;
  if (input == 32) return 3;
  return 4;
}

int main () {
  int arr[4] = {0, 0, 0, 0};
  char buffer[100];
  fgets(buffer, 100, stdin);
  for(int i = 0; buffer[i] != '\n' && buffer[i] != '\0'; i++) {
    switch (getType(buffer[i]))
    {
    case 1:
      arr[1] += 1;
      break;
    case 2:
      arr[0] += 1;
      break;
    case 3:
      arr[2] += 1;
      break;
    case 4:
      arr[3] += 1;
      break;

    default:
      break;
    }
  }
  for(int i = 0; i < 4; i++) {
    i == 3 ? printf("%d\n", arr[i]) : printf("%d ", arr[i]); 
  }
 
  return 0;
}