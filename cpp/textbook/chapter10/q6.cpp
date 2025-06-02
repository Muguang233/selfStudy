#include <iostream>
#include "move.h"
using namespace std;

int main() {
  Move m1(3.0, 4.0); 
  cout << "Initial move: ";
  m1.showmove(); 

  Move m2(1.0, 2.0); 
  cout << "Second move: ";
  m2.showmove();

  Move m3 = m1.add(m2); 
  cout << "After adding second move to first move: ";
  m3.showmove(); 

  m1.reset(5.0, 6.0);
  cout << "After resetting first move: ";
  m1.showmove();
  return 0;
}