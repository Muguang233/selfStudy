#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
  int num1;
  int num2;
  struct node *next;
};

struct list {
  struct node *head;
};

typedef struct list *List;

struct node *newNode(int num1, int num2) {
  struct node *n = new node;
  n->num1 = num1;
  n->num2 = num2;
  n->next = NULL;
  return n;
}

void append_list(List list, int id, int score) {
  struct node *n = newNode(id, score);
  if (n == NULL) {
    return;
  }
  if (list->head == NULL) {
    list->head = n;
    return;
  }
  struct node *curr = list->head;
  while(curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = n;
}

int get_sum_a(struct node *curr) {
  if(curr == NULL) return 0;
  return curr->num1 + get_sum_a(curr->next);
}
int get_sum_b(struct node *curr) {
  if(curr == NULL) return 0;
  return curr->num2 + get_sum_b(curr->next);
}

int main() {
  int n, a, b;
  cin >> n;
  List new_list = new list;
  for(int i = 0; i < n; i++) {
    cin >> a >> b;
    append_list(new_list, a, b);
  }
  int a_sum = get_sum_a(new_list->head);
  int b_sum = get_sum_b(new_list->head);
  cout << a_sum << "+" << b_sum << "i" << endl;
  return 0;
}