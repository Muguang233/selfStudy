#include <iostream>
using namespace std;

double *fill_array(double *, int);
void show_array(double *, double *);
void reverse_array(double *, double *);

int main() {
  int n;
  cout << "please enter the expect size of array\n";
  cin >> n;
  double arr[n];
  double *ptr = fill_array(arr, n);
  show_array(arr, ptr);
  reverse_array(arr, ptr);
  show_array(arr, ptr);
  return 0;
}

double *fill_array(double *arr, int size) {
  double *ptr = arr;
  double input;
  for(int i = 0; i < size; i++){
    if(!(cin >> input)) break;
    *ptr = input;
    ptr++;
  }
  return ptr;
}

void show_array(double *arr, double *end) {
  for(double *ptr = arr; ptr != end; ptr++) cout << *ptr << " ";
  cout << endl;
}

void reverse_array(double *start, double *end) {
  double *backward = end;
  backward--;
  for(double *ptr = start; ptr!=backward; ptr++) {
    double temp = *backward;
    *backward = *ptr;
    *ptr = temp;
    backward--;
    if(ptr == backward) break;
  }
}