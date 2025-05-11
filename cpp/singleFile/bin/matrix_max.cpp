#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x;
  int max = 0;
  int row, col;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> x;
      if(abs(x) > max) {
        max = abs(x);
        row = i;
        col = j;
      }
    }
  }
  printf("%d %d %d\n", max, row+1, col+1);
  return 0;
}