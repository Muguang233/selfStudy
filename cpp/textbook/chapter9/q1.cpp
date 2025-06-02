#include <iostream>
#include "golf.h"
using namespace std;

int main() {
  const int MaxGolfers = 5;
  golf golfers[MaxGolfers];
  int count = 0;

  while (count < MaxGolfers) {
    if (!setgolf(golfers[count])) {
      break;
    }
    count++;
  }

  cout << "\nGolfers List:\n";
  for (int i = 0; i < count; i++) {
    showgolf(golfers[i]);
  }

  if (count > 0) {
    int newHandicap;
    cout << "Enter new handicap for the first golfer: ";
    cin >> newHandicap;
    handicap(golfers[0], newHandicap);
    cout << "Updated first golfer's information:\n";
    showgolf(golfers[0]);
  }

  return 0;
}