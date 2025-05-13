#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
  int num;
  struct node *next;
};

struct list {
  struct node *head;
};

typedef struct list *List;

struct node *newNode(int num) {
  struct node *n = new node;
  n->num = num;
  n->next = NULL;
  return n;
}

void append_list(List list, int value) {
  struct node *n = newNode(value);
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


int get_sum(struct node *curr) {
  if(curr == NULL) return 0;
  return curr->num + get_sum(curr->next);
}

int main() {
  int a, b;
  List la = new list;
  List lb = new list;
  la->head = NULL;
  lb->head = NULL;
  for(int i = 0; i < 10; i++) {
    cin >> a >> b;
    append_list(la, a);
    append_list(lb, b);
  }
  int ra = get_sum(la->head);
  int rb = get_sum(lb->head);
  cout << ra << "+" << rb << "i" << endl;
  return 0;
}