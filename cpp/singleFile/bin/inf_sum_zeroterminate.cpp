#include <iostream>
using namespace std;

int main() {
  int a, b;
  while(std::cin >> a >> b) {
    if(a == 0 && b == 0) break;
    cout << a+b << endl;
  }
  return 0;
}