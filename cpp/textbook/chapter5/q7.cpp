#include <iostream>
using namespace std;

struct car {
  string make;
  int year;
};

int main() {
  int n;
  cout << "how many cars do you wish to catalog? ";
  cin >> n;
  car *cars = new car[n];
  for (int i = 0; i < n; i++) {
    cout << "Car #" << (i + 1) << endl;
    cout << "Please enter the make: ";
    cin >> cars[i].make;
    cout << "Please enter the year made: ";
    cin >> cars[i].year;
  }
  cout << "Here is your collection: " << endl;
  for (int i = 0; i < n; i++) {
    cout << cars[i].year << " " << cars[i].make << endl;
  }
  delete[] cars;
  return 0;
}
