#include <iostream>
using namespace std;

int main () {
  int a, b, c;
  cin >> a;
  cin >> b >> c;
  getchar();
  std::string s;
  getline(std::cin, s);
  cout << a + b + c << " " << s << endl;
  return 0;
}