#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && abs(arr[j]) > abs(key)) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void print_arr_inverse(int arr[], int n) {
  for(int i = n-1; i >= 0; i--) {
    i == 0? cout << arr[i] << endl : cout << arr[i] << " ";
  }
}

int main() {
  int n;
  while(std::cin >> n && n != 0) {
    int arr[n], input;
    for(int i = 0; i < n; i++) {
      cin >> input;
      arr[i] = input;
    }
    insertionSort(arr, n);
    print_arr_inverse(arr, n);
  }
  return 0;
}