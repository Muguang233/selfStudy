#include <iostream>
using namespace std;

bool all(int arr[], int m, int n) {
  bool check[m];
  bool result = true;
  for(int i = 0; i < m; i++) {
    check[i] = false;
  }
  for(int i = 1; i <= m; i++) {
    for(int j = 0; j < n; j++) {
      if(arr[j] == i) {
        check[i-1] = true;
      }
    }
  }
  for(int i = 0; i < m; i++) {
    if(check[i] == false) result = false;
  }
  arr[n-1] = 0;
  return result;
}

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int count = 0;
  for(int i = n; i >= m; i--) {
    if(!all(arr, m, i)) break;
    count++;
  }
  
  cout << count << endl;
  return 0;
}