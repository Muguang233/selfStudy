#include <iostream>
using namespace std;

int main() {
  int input;
  int sum = 0;
  while(cin >> input) {
    if(input == 0) {
      break;
    }
    sum += input;
    cout << "The sum of all number is: " << sum << endl;
  }
  return 0;
}