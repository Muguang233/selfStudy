#include <iostream>
using namespace std;


struct node {
  int num;
  struct node *next;
};

struct list {
  struct node *head;
  int size;
};

typedef struct list *List;

struct node *newNode(int num) {
  struct node *n = new node;
  n->num = num;
  n->next = NULL;
  return n;
}

void add_node(List list, int value) {
  struct node *n = newNode(value);
  if (n == NULL) {
    return;
  }
  if (list->head == NULL) {
    list->head = n;
    list->size++;
    return;
  }
  n->next = list->head;
  list->head = n;
  list->size++;
}
void print_list(List list) {
  struct node *curr = list->head;
  if(curr == NULL) {
    cout << "Link list is empty" << endl;
    return;
  }
  while(curr != NULL) {
    cout << curr->num << " ";
    curr = curr->next;
  }
  cout << endl;
}
void list_delete(List list, int n) {
  if(n > list->size || list->head == NULL) {
    cout << "delete fail" << endl;
    return;
  }
  if(n == 1) {
    struct node *tmp = list->head->next;
    delete list->head;
    list->head = tmp;
    list->size--;
    cout << "delete OK" << endl;
    return;
  }
  struct node *curr = list->head;
  for (int i = 1; i < n-1; i++) {
    curr = curr->next;
  }
  struct node *tmp = curr->next;
  curr->next = tmp->next;
  delete tmp;
  list->size--;
  cout << "delete OK" << endl;
}

void list_get(List list, int n) {
  if (n > list->size) {
    cout << "get fail" << endl;
    return;
  }
  struct node *curr = list->head;
  for(int i = 1; i < n; i++) {
    curr = curr->next;
  }
  cout << curr->num << endl;
}

// n = 2 
// 2 6 3 6 1
void list_insert_nth(List list, int n, int value) {
  if(n > list->size && n != 1) {
    cout << "insert fail" << endl;
    return;
  }
  struct node *new_node = newNode(value);
  if (n == 1) {
    new_node->next = list->head;
    list->head = new_node;
    cout << "insert OK" << endl;
    list->size++;
    return;
  }
  struct node *curr = list->head;
  for (int i = 1; i < n-1; i++) {
    curr = curr->next;
  }
  new_node->next = curr->next;
  curr->next = new_node;
  list->size++;
  cout << "insert OK" << endl;
}

int main() {
  int n, input;
  scanf("%d", &n);
  List l = new list;
  l->head = NULL;
  l->size = 0;
  for(int i = 0; i < n; i++) {
    cin >> input;
    add_node(l, input);
  }
  int operation;
  cin >> operation;
  //std::cin.ignore();
  std::string str;
  while(operation--) {
    cin >> str;
    if(str == "get") {
      int param = 0;
      cin >> param;
      list_get(l, param);
    }else if(str == "show") {
      print_list(l);
    }else if(str == "delete") {
      int param;
      cin >> param;
      list_delete(l, param);
    }else if(str == "insert") {
      int param1, param2;
      cin >> param1 >> param2;
      list_insert_nth(l, param1, param2);
    }
  }

  return 0;
}