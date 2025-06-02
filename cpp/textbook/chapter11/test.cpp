#include <iostream>
using namespace std;

class test {
  int number_1;
  int number_2;
public:
  test(int n1 = 5, int n2 = 5) {
    number_1 = n1;
    number_2 = n2;
  }
  explicit test(int new1) {
    number_1 = new1;
  }
  test operator+(const test &t) {
    test sum;
    sum.number_1 = number_1 + t.number_1;
    sum.number_2 = number_2 + t.number_2;
    return sum;
  }
  void operator<<(ostream & out) {
    out << "Num1: " << number_1 << endl;
    out << "Num2: " << number_2 << endl;
  }
  void operator<<(test & t) {
    number_1 = t.number_1;
    number_2 = t.number_2;
  }
  friend ostream & operator<<(ostream & out, test & t) {
    out << "Num1: " << t.number_1 << endl;
    out << "Num2: " << t.number_2 << endl;
    return out;
  }
  void show() const {
    cout << "Num1: " << number_1 << endl;
    cout << "Num2: " << number_2 << endl;
  }
};

int main() {
  test t1;
  test t2(20, 20);
  test sum = t1 + t2;
  //sum.show();
  sum << cout;
  test t3;
  t3 << t2;
  t3 << cout;
  cout << "友元: \n";
  cout << t1;
  cout << "重载: \n";
  t1 = 100;
  cout << t1;
  test t4 = 300;
  cout << t4;
  return 0;
}