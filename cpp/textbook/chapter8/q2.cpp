#include <iostream>
using namespace std;
struct CandyBar {
  string name;
  double weight;
  int calories;
};

void setCandyBar(
  CandyBar& candy,
  const char* name = "Millennium Munch",
  double weight = 2.85, 
  int calories = 350
) {
  candy.name = name;
  candy.weight = weight;
  candy.calories = calories;
}

int main() {
  CandyBar snack;
  setCandyBar(snack);
  cout << "Name: " << snack.name << endl;
  cout << "Weight: " << snack.weight << " oz" << endl;
  cout << "Calories: " << snack.calories << " kcal" << endl;
  return 0;
}