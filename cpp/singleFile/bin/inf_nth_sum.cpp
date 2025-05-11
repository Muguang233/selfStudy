#include <iostream>
using namespace std;

int main () {
  int n, num;
  while(std::cin >> n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
      cin >> num;
      sum += num;
    }
    cout << sum << endl;
  }
  return 0;
}