#include <iostream>
using namespace std;

int main() {
  long long world_population, local_population;
  cout << "Enter the world population: ";
  cin >> world_population;
  cout << "Enter the local population: ";
  cin >> local_population;
  double result = local_population/world_population;
  cout << result << endl;
  return 0;
}