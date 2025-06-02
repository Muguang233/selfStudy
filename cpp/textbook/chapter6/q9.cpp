#include <iostream>
#include <fstream>
using namespace std;

struct donor {
  string name;
  int amount;
};

int main() {
  ifstream file("input.txt");
  int n;
  file >> n;
  donor arr[n];
  file.ignore();
  for(int i = 0; i < n; i++) {
    getline(file, arr[i].name);
    file >> arr[i].amount;
    file.ignore();
  }

  cout << "num is: " << n << endl;
  for(int i = 0; i < n; i++) {
    cout << arr[i].name << endl << arr[i].amount << endl;
  }
  return 0;
}