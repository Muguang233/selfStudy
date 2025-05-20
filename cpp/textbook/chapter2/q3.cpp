#include <iostream>
using namespace std;

void call1() {
  cout << "Three blind mice" << endl;
}
void call2() {
  cout << "see how they run" << endl;
}

int main() {
  call1();
  call1();
  call2();
  call2();
  return 0;
}