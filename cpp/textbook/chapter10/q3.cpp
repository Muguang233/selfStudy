#include <iostream>
#include "golf.h"
using namespace std;

int main() {
  golf player1("John Doe", 5);
  player1.showgolf();

  golf player2;
  player2.showgolf();
  cout << "Changing handicap for player 1..." << endl;
  player1.set_handicap(10);
  player1.showgolf();
  cout << "Changing handicap for player 2..." << endl;
  player2.set_handicap(15);
  player2.showgolf();
  cout << "End of program." << endl;
  cout << "Press Enter to exit." << endl;
  cin.ignore();

  return 0;
}