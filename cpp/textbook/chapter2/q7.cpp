#include <iostream>
using namespace std;

void out(int h, int min) {
  cout << "Time: " << h << ":" << min << endl;
}

int main() {
  int h, m;
  cout << "Enter the number of hours: ";
  cin >> h;
  cout << "Enter the number of minutes: ";
  cin >> m;
  out(h, m);
  return 0;
}