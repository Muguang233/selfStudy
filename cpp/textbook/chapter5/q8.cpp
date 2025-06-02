#include <iostream>
#include <cstring>
using namespace std;

int main() {
  cout << "Enter words (to stop, type the word done):" << endl;
  char str[100];
  // Using char array instead of string
  int count = 0;
  while(cin >> str) {
    if (strcmp(str, "done") == 0) {
      break;
    }
    count++;
  }
  cout << "You entered " << count << " words." << endl;
  return 0;
}