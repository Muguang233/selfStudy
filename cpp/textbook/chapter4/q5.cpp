#include <iostream>
using namespace std;

struct CandyBar {
  string brand;
  double weight;
  int calories;
};

int main() {
  struct CandyBar snack;
  snack.brand = "Mocha Munch";
  snack.weight = 2.3;
  snack.calories = 350;
  
  return 0;
}