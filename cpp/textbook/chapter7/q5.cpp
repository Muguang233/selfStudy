#include <iostream>
using namespace std;

long long factorial(int);

int main() {
  int input;
  long long result;
  while(cin >> input) {
    result = factorial(input);
    cout << result << endl;
  }
  return 0;
}

long long factorial(int n) {
  if(n == 1) return 1;
  return n*factorial(n-1);
}