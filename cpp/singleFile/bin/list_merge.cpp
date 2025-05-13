#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
  int id;
  int value;
  struct node *next;
};

struct list {
  struct node *head;
};
typedef struct list *List;
List merge_list(List a, List b);
void print_list(List list);
void append_list(List list, int id, int score);
struct node *newNode(int id, int score);
void insert_order(List list, int id, int score);
int main() {
  int n, m, id, score;
  cin >> n >> m;
  struct list *a = new list;
  struct list *b = new list;
  a->head = NULL;
  b->head = NULL;
  for(int i = 0; i < n; i++) {
    cin >> id >> score;
    append_list(a, id, score);
  }
  for(int i = 0; i < m; i++) {
    cin >> id >> score;
    append_list(b, id, score);
  }
  List merge = merge_list(a, b);
  print_list(merge);
}

List merge_list(List a, List b) {
    List n = new list;
    n->head = NULL;

    struct node *curr = a->head;
    while (curr != NULL) {
        insert_order(n, curr->id, curr->value);
        curr = curr->next;
    }

    curr = b->head;
    while (curr != NULL) {
        insert_order(n, curr->id, curr->value);
        curr = curr->next;
    }

    return n;
}

void insert_order(List list, int id, int score) {
    struct node *new_node = new node;
    new_node->id = id;
    new_node->value = score;
    new_node->next = NULL;

    if (list->head == NULL || id < list->head->id) {
        new_node->next = list->head;
        list->head = new_node;
        return;
    }

    struct node *curr = list->head;
    while (curr->next != NULL && curr->next->id < id) {
        curr = curr->next;
    }

    new_node->next = curr->next;
    curr->next = new_node;
}

void print_list(List list) {
  struct node *curr = list->head;
  while(curr != NULL) {
    cout << curr->id << " " << curr->value << endl;
    curr = curr->next;
  }
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

struct node *newNode(int id, int score) {
  struct node *n = new node;
  n->id = id;
  n->value = score;
  n->next = NULL;
  return n;
}