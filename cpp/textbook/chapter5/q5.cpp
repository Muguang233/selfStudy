#include <iostream>
using namespace std;

int main() {
  string month[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
  
  int sales[12];
  for (int i = 0; i < 12; i++) {
    cout << "Enter the sales for " << month[i] << ": ";
    cin >> sales[i];
  }
  int sum = 0;
  for (int i = 0; i < 12; i++) {
    sum += sales[i];
  }
  cout << "The total sales for the year is: " << sum << endl;
  return 0;
}