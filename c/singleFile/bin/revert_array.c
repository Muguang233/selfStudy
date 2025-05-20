#include <stdio.h>


//a b c d e f
//lo 0 1 2 
//hi 5 4 3 2

void reverse_arr(char arr[], int lo, int hi) {
  if(lo >= hi) return;
  char tmp = arr[lo];
  arr[lo] = arr[hi];
  arr[hi] = tmp;
  printf("%s\n", arr);
  reverse_arr(arr, lo+1, hi-1);
}


int main() {
  int n;
  char arr[100];
  scanf("%d %s", &n, arr);
  reverse_arr(arr, 0, n-1);
  printf("\n%s\n", arr);
  return 0;
}
