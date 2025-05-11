#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  size_t arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  size_t sum = 0;
  size_t sqrt = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    sqrt += arr[i] * arr[i];
  }
  size_t result = ((sum * sum) - sqrt) / 2;
  cout << result << endl;
  return 0;
}
