#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[101];
  int age;
  int grade;
} Student;

int compare(const void *a, const void *b) {
  Student *s1 = (Student *)a;
  Student *s2 = (Student *)b;

  if (s1->grade != s2->grade) {
    return s1->grade - s2->grade; 
  }
      
  int name_cmp = strcmp(s1->name, s2->name);
  if (name_cmp != 0) return name_cmp;
  return s1->age - s2->age;
}

int main() {
    int N;
    Student students[1000];

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s %d %d", students[i].name, &students[i].age, &students[i].grade);
        }

        qsort(students, N, sizeof(Student), compare);

        for (int i = 0; i < N; i++) {
            printf("%s %d %d\n", students[i].name, students[i].age, students[i].grade);
        }
    }

    return 0;
}