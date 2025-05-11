#include <iostream>
using namespace std;

void process(int r, int x) {
  if(x > 2 || x < 1) {
    cout << "No" << endl;
    return;
  }
  if(r > 4229 || r < 1) {
    cout << "No" << endl;
    return;
  }
  if(x == 1) {
    if(r < 1600 || r > 2999) {
      cout << "No" << endl;
      return;
    }
    cout << "Yes" << endl;
    return;
  }
  if(x == 2) {
    if(r < 1200 || r > 2399) {
      cout << "No" << endl;
      return;
    }
    cout << "Yes" << endl;
    return;
  }
}

int main() {
  int r, x;
  cin >> r >> x;
  process(r, x);
  return 0;
}