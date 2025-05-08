#include <stdio.h>
void scanInput(int arr[], int n){
  for(int i = 0; i < n; i++) {
    scanf(" %d", &arr[i]);
  }
} 
void shift(int arr[], int n, int c) {
  for(int i = 0; i < c; i++) {
    int tmp = arr[n-1];
    for(int j = n-1; j >= 1; j--){
      arr[j] = arr[j-1];
    }
    arr[0] = tmp;
  }
}
void printArr(int arr[], int n) {
  for(int i = 0; i < n; i++) {
    i == n-1 ? printf("%d\n", arr[i]) : printf("%d ", arr[i]); 
  }
}
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  scanInput(arr, n);
  int count;
  scanf("%d", &count);
  shift(arr, n, count);
  printArr(arr, n);
  return 0;
}