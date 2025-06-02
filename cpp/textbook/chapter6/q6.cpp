#include <iostream>
using namespace std;

struct Donor {
  string name;
  double amount;
};

int main() {
  int n;
  cout << "Please Enter the number of Donor\n";
  cin >> n;
  Donor list[n];
  for(int i = 0; i < n; i++) {
    cout << "Please Enter the Donor's name: ";
    cin >> list[i].name;
    cout << "Please Enter the amount of donation: ";
    cin >> list[i].amount;
  }
  cout << "Grand Patrons: " << endl;
  for(int i = 0; i < n; i++) if(list[i].amount >= 10000) cout << list[i].name << endl;
  cout << "Patrons: " << endl;
  for(int i = 0; i < n; i++) if(list[i].amount < 10000) cout << list[i].name << endl;
  return 0;
}