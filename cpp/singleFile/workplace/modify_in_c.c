#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    struct node *n = (struct node *)malloc(sizeof(struct node));
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
        printf("Link list is empty\n");
        return;
    }
    while(curr != NULL) {
        printf("%d ", curr->num);
        curr = curr->next;
    }
    printf("\n");
}

void list_delete(List list, int n) {
    if(n > list->size || list->head == NULL) {
        printf("delete fail\n");
        return;
    }
    if(n == 1) {
        struct node *tmp = list->head->next;
        free(list->head);
        list->head = tmp;
        list->size--;
        printf("delete OK\n");
        return;
    }
    struct node *curr = list->head;
    for (int i = 1; i < n-1; i++) {
        curr = curr->next;
    }
    struct node *tmp = curr->next;
    curr->next = tmp->next;
    free(tmp);
    list->size--;
    printf("delete OK\n");
}

void list_get(List list, int n) {
    if (n > list->size) {
        printf("get fail\n");
        return;
    }
    struct node *curr = list->head;
    for(int i = 1; i < n; i++) {
        curr = curr->next;
    }
    printf("%d\n", curr->num);
}

void list_insert_nth(List list, int n, int value) {
    if(n > list->size && n != 1) {
        printf("insert fail\n");
        return;
    }
    struct node *new_node = newNode(value);
    if (n == 1) {
        new_node->next = list->head;
        list->head = new_node;
        printf("insert OK\n");
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
    printf("insert OK\n");
}

int main() {
    int n, input;
    scanf("%d", &n);
    List l = (List)malloc(sizeof(struct list));
    l->head = NULL;
    l->size = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &input);
        add_node(l, input);
    }
    int operation;
    scanf("%d", &operation);
    char str[10];
    while(operation--) {
        scanf("%s", str);
        if(strcmp(str, "get") == 0) {
            int param = 0;
            scanf("%d", &param);
            list_get(l, param);
        } else if(strcmp(str, "show") == 0) {
            print_list(l);
        } else if(strcmp(str, "delete") == 0) {
            int param;
            scanf("%d", &param);
            list_delete(l, param);
        } else if(strcmp(str, "insert") == 0) {
            int param1, param2;
            scanf("%d %d", &param1, &param2);
            list_insert_nth(l, param1, param2);
        }
    }

    struct node *curr = l->head;
    while(curr != NULL) {
        struct node *tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    free(l);

    return 0;
}