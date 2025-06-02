#include <iostream>
using namespace std;

int main() {
  cout << "Enter words (to stop, type the word done):" << endl;
  string str;
  int count = 0;
  while(cin >> str) {
    if (str == "done") {
      break;
    }
    count++;
  }
  cout << "You entered " << count << " words." << endl;
  return 0;
}