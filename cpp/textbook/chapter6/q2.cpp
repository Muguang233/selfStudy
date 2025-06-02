#include <iostream>
using namespace std;

int main() {
  double donation[10];
  double input;
  for(int i = 0; i < 10; i++) {
    if(!(cin>>input)) break;
    donation[i] = input;
    cout << donation[i] << endl;
  }
  return 0;
}