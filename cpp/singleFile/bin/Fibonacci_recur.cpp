#include <iostream>
using namespace std;

int f(int x) {
  if(x == 1 || x == 0) return x;
  return f(x - 1) + f(x - 2);
}

int main() {
  int n;
  cin >> n;
  int result = f(n);
  cout << result << endl;
  return 0;
}