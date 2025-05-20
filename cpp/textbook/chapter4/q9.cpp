#include <iostream>
using namespace std;

struct CandyBar {
  string brand;
  double weight;
  int calories;
};

int main() {
  struct CandyBar *snack = new CandyBar[3];
  for(int i = 0; i < 3; i++) {
    snack[i].brand = "Mocha Munch";
    snack[i].weight = 2.3;
    snack[i].calories = 350;
  }
  
  delete [] snack;

  return 0;
}