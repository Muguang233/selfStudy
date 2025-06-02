#include <iostream>
using namespace std;

int main() {
  char ch;
  while(cin.get(ch) && ch != '@') {
    if(isdigit(ch)) continue;
    if(isupper(ch)) {
      ch -= 32;
      cout << ch;
    } else if(islower(ch)) {
      ch += 32;
      cout << ch;
    } else {
      cout << ch;
    }
  }
  return 0;
}
