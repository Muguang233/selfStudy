#include <iostream>
using namespace std;

int main() {
  string month[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
  int sales_per_year[3][12];
  for (int year = 0; year < 3; year++) {
    cout << "Enter the sales for year " << (year + 1) << ":" << endl;
    for (int i = 0; i < 12; i++) {
      cout << "Enter the sales for " << month[i] << ": ";
      cin >> sales_per_year[year][i];
    }
  }
  int sum_sales[3] = {0, 0, 0};
  for (int year = 0; year < 3; year++) {
    for (int i = 0; i < 12; i++) {
      sum_sales[year] += sales_per_year[year][i];
    }
  }
  int sum = 0;
  for (int year = 0; year < 3; year++) {
    sum += sum_sales[year];
  }
  for(int year = 0; year < 3; year++) {
    cout << "The total sales for year " << (year + 1) << " is: " << sum_sales[year] << endl;
  }
  cout << "The total sales for the three years is: " << sum << endl;
  return 0;
}