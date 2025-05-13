#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
  int input;
  int arr[4];
  for(int i = 0; i < 4; i++) {
    cin >> input;
    arr[i] = input;
  }
  insertionSort(arr, 4);
  for(int i = 0; i < 4; i++) {
    i == 3 ? printf("%d\n", arr[i]) : printf("%d ", arr[i]); 
  }
  return 0;
}