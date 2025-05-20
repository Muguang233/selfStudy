#include <iostream>
using namespace std;

int main() {
  int degree, min_arc, sec_arc;
  cout << "Enter the degree: ";
  cin >> degree;
  cout << "Enter the minutes of arc: ";
  cin >> min_arc;
  cout << "Enter the seconds of arc: ";
  cin >> sec_arc;
  const int sec_in_min = 60;
  double result = degree + (min_arc/sec_in_min) + (sec_arc/(sec_in_min*sec_in_min));
  printf("%d degrees, %d minutes, %d seconds = %lf", degree, min_arc, sec_arc, result);
  return 0;
}