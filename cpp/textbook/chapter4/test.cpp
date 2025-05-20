#include <iostream>
using namespace std;

int main() {
  int x[] = {1, 2, 3, 4, 5};
  int *px;
  px = &x[0];
  int sum = *px + (*px+4);

  cout << sum << endl;

  cout << (int *) "Hello" << endl;
  return 0;
}