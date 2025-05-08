#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student {
  char id[10];
  char name[10];
  int grade[3];
};

void print_average(struct student *data, int n) {
  int total[] = {0, 0, 0};
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      total[j] += data[i].grade[j];
    }
  }
  for (int i = 0; i < 3; i++) {
    i == 2 ? printf("%d\n", total[i]/n) : printf("%d ", total[i]/n);
  }
}

void print_best(struct student *data, int n) {
  int max = 0;
  int index;
  for(int i = 0; i < n; i++){
    int total = 0;
    for(int j = 0; j < 3; j++) total += data[i].grade[j];
    if(total > max) {
      max = total;
      index = i;
    }
  }
  printf("%s %s ", data[index].id, data[index].name);
  for (int i = 0; i < 3; i++) {
    i == 2 ? printf("%d\n", data[index].grade[i]) : printf("%d ", data[index].grade[i]);
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
  print_average(data, n);
  print_best(data, n);
  return 0;
}