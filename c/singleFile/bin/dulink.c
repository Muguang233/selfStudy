#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node {
  int data;
  struct node *prev;
  struct node *next;
};

struct list {
  struct node *head;
  int size;
};

typedef struct list *List;

void print_list(List list) {
  struct node *curr = list->head;
  if(curr == NULL) return;
  while(true) {
    printf("%d", curr->data);
    if(curr->next == NULL) break;
    printf(" ");
    curr = curr->next;
  }
  printf("\n");
}

struct node *newNode(int value) {
  struct node *n = malloc(sizeof(struct node));
  if(n == NULL) return NULL;
  n->data = value;
  n->next = NULL;
  n->prev = NULL;
  return n;
}
void insert_nth(List list, int n, int value) {
  if (n < 1 || n > list->size + 1) return;
  struct node *new_node = newNode(value);
  if(n == 1) {
    new_node->next = list->head;
    if (list->head != NULL) {
        list->head->prev = new_node;
      }
    list->head = new_node;
    list->size++;
    return;
  }
  struct node *curr = list->head;
  for (int i = 1; i < n-1; i++) {
      curr = curr->next;
  }
  new_node->next = curr->next;
  new_node->prev = curr;
  if(curr->next != NULL) {
    curr->next->prev = new_node;
  }
  curr->next = new_node;
  list->size++;
}

// 2 5 1 3 2
void list_delete(List list, int n) {
  if (n < 1 || n > list->size || list->head == NULL) {
    return;
  }
  
  if (n == 1) {
    struct node *tmp = list->head;
    list->head = tmp->next;
    if (list->head != NULL) {
        list->head->prev = NULL;
    }
    free(tmp);
  } else {
    struct node *curr = list->head;
    for (int i = 1; i < n - 1; i++) {
        curr = curr->next;
    }
    struct node *tmp = curr->next;
    curr->next = tmp->next;
    if (tmp->next != NULL) {
        tmp->next->prev = curr;
    }
    free(tmp);
  }
  list->size--;
}

int main() {
  List l = malloc(sizeof(struct list));
  l->head = NULL;
  l->size = 0;
  int cmd;
  while(scanf("%d", &cmd) != EOF) {
    if(cmd == 0) {
      print_list(l);
    }
    if(cmd == 1) {
      int p1, p2;
      scanf(" %d %d", &p1, &p2);
      insert_nth(l, p1, p2);
    }
    if(cmd == 2) {
      int n;
      scanf(" %d", &n);
      list_delete(l, n);
    }
  }

  return 0;
}