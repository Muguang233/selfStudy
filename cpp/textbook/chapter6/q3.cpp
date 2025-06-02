#include <iostream>
using namespace std;

void intro() {
  cout << "Please enter one of the following choice: " << endl;
  cout << "c) carnivore       p) pianist" << endl;
  cout << "t) tree            g) game" << endl;
}

int main() {
  char cmd;
  intro();
  bool loop = true;
  while(loop) {
    cout << "please enter a c, p, t, or g: ";
    cin >> cmd;
    switch (cmd)
    {
    case 'c':
      cout << "carnivore" << endl;
      loop = false;
      break;
    case 'p':
      cout << "pianist" << endl;
      loop = false;
      break;
    case 't':
      cout << "tree" << endl;
      loop = false;
      break;
    case 'g':
      cout << "game" << endl;
      loop = false;
      break;
    
    default:
      break;
    }
  }
  return 0;
}