#include <iostream>
using namespace std;

int main() {
  int total_distance, fuel_usage;
  cout << "Enter the total travel distance: ";
  cin >> total_distance;
  cout << "Enter the total fuel usage: ";
  cin >> fuel_usage;
  double result = total_distance/fuel_usage;
  cout << "the average distance per gallon is: " << result << endl;
  return 0;
}