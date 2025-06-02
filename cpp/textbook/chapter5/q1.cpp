#include <iostream>
using namespace std;

int main() {
  int start, end;
  cout << "Enter the start number: ";
  cin >> start;
  cout << "Enter the end number: ";
  cin >> end;
  int sum = 0;
  for(int i = start; i <= end; i++) {
    sum += i;
  }
  cout << "The sum of all number is: " << sum << endl;
  
  return 0;
}