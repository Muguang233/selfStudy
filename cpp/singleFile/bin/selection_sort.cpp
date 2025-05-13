#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void print_arr(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}

int main() {
  int arr[10], input;
  for(int i = 0; i < 10; i++) {
    cin >> input;
    arr[i] = input;
  }
  selectionSort(arr, 10);
  print_arr(arr, 10);
  return 0;
}