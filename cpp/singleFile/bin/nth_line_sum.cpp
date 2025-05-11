#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int sum = 0;
    int nth, num;
    cin >> nth;
    for(int j = 0; j < nth; j++) {
      cin >> num;
      sum += num;
    }
    cout << sum << endl;
  }
  return 0;
}