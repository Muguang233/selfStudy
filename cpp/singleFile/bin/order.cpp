#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int arr[]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void print(int x, int y, int z) {
    int print_arr[3] = {x, y, z};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (j != i)
                for (int k = 0; k < 3; k++)
                    if (k != i && k != j)
                        printf("%d %d %d\n", print_arr[i], print_arr[j], print_arr[k]);
}

int main() {
    int arr[4];
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

    sort(arr);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                print(arr[i], arr[j], arr[k]);
            }
        }
    }

    return 0;
}