#include <iostream>
using namespace std;

int getResult(int input) {
  
}

int main() {
  int input;
  cout << "_ ";
  cin >> input;
  const int factor = 12;
  int feet = input / factor;
  int inches = input % factor;
  cout << feet << "' " << inches << endl;
  return 0;
}