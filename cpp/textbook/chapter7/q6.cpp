#include <iostream>
using namespace std;

int fill_array(double[], int);
void show_array(double[], int);
void reverse_array(double[], int);

int main() {
  int n;
  cout << "please enter the expect size of array\n";
  cin >> n;
  double arr[n];
  int actual_size = fill_array(arr, n);
  show_array(arr, actual_size);
  reverse_array(arr, actual_size);
  show_array(arr, actual_size);
  return 0;
}

int fill_array(double arr[], int size) {
  int count = 0;
  double input;
  for(int i = 0; i < size; i++) {
    if(!(cin >> input)) break;
    count++;
    arr[i] = input;
  }
  return count;
}

void show_array(double arr[], int size) {
  for(int i = 0; i < size; i++) cout << arr[i] << " ";
  cout << endl;
}

void reverse_array(double arr[], int size) {
  for(int i = 0; i < size/2; i++) {
    double temp = arr[size-i-1];
    arr[size-i-1] = arr[i];
    arr[i] = temp;
  }
}