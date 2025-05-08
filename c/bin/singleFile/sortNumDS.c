#include <stdio.h>

void inputNumbers(int arr[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
}

void processNumbers(int arr[]) {
    int minIndex = 0, maxIndex = 0;
    
    for (int i = 1; i < 10; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    
    int temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;
    
    if (maxIndex == 0) {
        maxIndex = minIndex;
    }
    temp = arr[9];
    arr[9] = arr[maxIndex];
    arr[maxIndex] = temp;
}

void outputNumbers(int arr[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[10];
    inputNumbers(arr);
    processNumbers(arr);
    outputNumbers(arr);
    return 0;
}