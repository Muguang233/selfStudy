#include <iostream>
using namespace std;
inline int sum(int num, int start = 40, int step = 4) {
  return num * start + num / step * (num - 2 * (num / step) - 2);
}

int main() {
  int num;
  cout << "输入: ";
  cin >> num;

  int result = sum(num);
  cout << "结果: " << result << endl;

  return 0;
}