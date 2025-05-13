#include <iostream>
using namespace std;

int main() {
  int a, b, r;
  char ch;
  cin >> a >> b >> ch;
  switch (ch)
  {
  case '+':
    r = a + b;
    break;
  case '-':
    r = a - b;
    break;
  case '*':
    r = a * b;
    break;
  case '/':
    r = a / b;
    break;
  case '%':
    r = a % b;
    break;
  default:
    break;
  }
  cout << r << endl;
  return 0;
}