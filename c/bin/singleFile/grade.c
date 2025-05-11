#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
  char id[10];
  char name[10];
  int grade[3];
};

void print_student(struct student *data, int n) {
  for(int i = 0; i < n; i++) {
    printf("%s,%s,", data[i].id, data[i].name);
    for(int j = 0; j < 3; j++) {
      j == 2 ? printf("%d\n", data[i].grade[j]) : printf("%d,", data[i].grade[j]);
    } 
  }
}

int main() {
  int n;
  scanf("%d", &n);
  getchar();
  char buffer[100];
  struct student *data = malloc(sizeof(struct student) * n);
  for(int i = 0; i < n; i++) {
    fgets(buffer, 100, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    char *tok = strtok(buffer, " ");
    strcpy(data[i].id, tok);
    tok = strtok(NULL, " ");
    strcpy(data[i].name, tok);
    for(int j = 0; j < 3; j++) {
      tok = strtok(NULL, " ");
      int score = atoi(tok);
      data[i].grade[j] = score;
    }
  }
  print_student(data, n);
  return 0;
}