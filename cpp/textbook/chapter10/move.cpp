#include <iostream>
#include "move.h"
using namespace std;

Move::Move(double a, double b) : x(a), y(b) {}

void Move::showmove() const {
  cout << "x: " << x << ", y: " << y << endl;
}
Move Move::add(const Move &m) const {
  return Move(x + m.x, y + m.y);
}
void Move::reset(double a, double b) {
  x = a;
  y = b;
}
