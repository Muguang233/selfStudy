#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void find_min_abs(int *arr) {
  int min = abs(arr[0]);
  int index;
  for(int i = 0; i < 10; i++) {
    if(abs(arr[i]) <= min) min = abs(arr[i]);
  }
  for(int i = 0; i < 10; i++) {
    if(abs(arr[i]) == min) index = i;
  }
  int tmp = arr[index];
  arr[index] = arr[9];
  arr[9] = tmp;
}

int main() {
  int input[10];
  for (size_t i = 0; i < 10; i++)
  {
    cin >> input[i];
  }
  find_min_abs(input);
  for(int i = 0; i < 10; i++) {
    i == 9 ? cout << input[i] << endl : cout << input[i] << " ";
  }
  return 0;
}