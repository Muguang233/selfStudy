#include <stdio.h>
#include <string.h>

#define MAX_SIZE 11

typedef struct {
    char data[9];
    int next;
} Node;

Node space[MAX_SIZE];
int head;

void init_space() {
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        space[i].next = i + 1;
    }
    space[MAX_SIZE - 1].next = 0;
}

int malloc_space() {
    int allocated = space[0].next;
    if (allocated != 0) {
        space[0].next = space[allocated].next;
    }
    return allocated;
}

void free_space(int index) {
    space[index].next = space[0].next;
    space[0].next = index;
}

void insert_element(int a, const char* e) {
    int pre = head;
    for (int i = 1; i < a; i++) {
        pre = space[pre].next;
    }
    int new_node = malloc_space();
    if (new_node == 0) {
        return; 
    }
    strncpy(space[new_node].data, e, 8);
    space[new_node].data[8] = '\0';
    space[new_node].next = space[pre].next;
    space[pre].next = new_node;
}

void delete_element(int a) {
    int pre = head;
    for (int i = 1; i < a; i++) {
        pre = space[pre].next;
    }
    int del_node = space[pre].next;
    space[pre].next = space[del_node].next;
    free_space(del_node);
}

int search_element(const char* e) {
    int current = space[head].next;
    while (current != 0) {
        if (strcmp(space[current].data, e) == 0) {
            return current;
        }
        current = space[current].next;
    }
    return 0;
}

void show() {
    for (int i = 0; i < MAX_SIZE; i++) {
        if (space[i].data[0] == '\0') {
            printf("%10d\n", space[i].next);
        } else {
            printf("%-8s%2d\n", space[i].data, space[i].next);
        }
    }
}

int main() {
    init_space();
    head = malloc_space();
    space[head].next = 0;

    char command[10];
    int a;
    char e[9];

    while (scanf("%s", command) != EOF) {
        if (strcmp(command, "show") == 0) {
            show();
            printf("********************\n");
        } else if (strcmp(command, "insert") == 0) {
            scanf("%d %s", &a, e);
            insert_element(a, e);
        } else if (strcmp(command, "delete") == 0) {
            scanf("%d", &a);
            delete_element(a);
        } else if (strcmp(command, "search") == 0) {
            scanf("%s", e);
            int pos = search_element(e);
            printf("%2d\n", pos);
            printf("********************\n");
        }
    }

    return 0;
}