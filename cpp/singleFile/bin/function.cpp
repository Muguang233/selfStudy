#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double get_result(int x) {
  if(x < 0) return fabs((double) x);
  if(x >= 0 && x < 2) return sqrt((double) x + 1);
  if(x >= 2 && x < 4) return pow((double) x+1, 2);
  return 2*x + 5;
}

int main() {
  int x;
  cin >> x;
  double result = get_result(x);
  cout << fixed << setprecision(2) << result << endl;
  return 0;
}