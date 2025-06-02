#include <iostream>
#include "person.h"
using namespace std;
int main() {
  Person one;                       // use default constructor
  Person two("Smythecraft");        // use #2 with one default argument
  Person three("Dimwiddy", "Sam");  // use #2, no defaults
  one.Show();
  cout << endl;
  one.FormalShow();
  cout << endl;
  two.Show();
  cout << endl;
  two.FormalShow();
  cout << endl;
  three.Show();
  cout << endl;
  three.FormalShow();
  cout << endl;
  return 0;
}