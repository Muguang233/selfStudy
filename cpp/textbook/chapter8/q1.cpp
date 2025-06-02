#include <iostream>
#include <string>
using namespace std;
void printString(const string& str, int repeatFlag = 0) {
  static int callCount = 0;
  ++callCount;

  int times = repeatFlag ? callCount : 1;

  for (int i = 0; i < times; ++i) {
    cout << str << endl;
  }
}

int main() {
  printString("Hello, world!");
  printString("Hello again!", 1);
  printString("Just once more.");
  printString("This should print four times!", 123);
  return 0;
}