#include <iostream>

using namespace std;

void input(int [], int *);
void print_score(int [], int);
void average(int [], int);
int main() {
  int score[10];
  int count = 0;
  input(score, &count);
  print_score(score, count);
  average(score, count);
}

void input(int arr[], int *count) {
  int input;
  for(int i = 0; i < 10; i++) {
    if(!(cin >> input)) break;
    arr[i] = input;
    cout << arr[i] << endl;
    (*count)++;
  }
}

void print_score(int arr[], int n) {
  for(int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
}

void average(int arr[], int n) {
  double total = 0;
  for(int i = 0; i < n; i++) total+=arr[i];
  total /= n;
  cout << total << endl;
}