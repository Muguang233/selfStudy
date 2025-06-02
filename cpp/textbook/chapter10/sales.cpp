#include <iostream>
#include "sales.h"
using namespace std;

sales::sales(const double ar[], int n) {
  int count = (n < QUARTERS) ? n : QUARTERS;
  double total = 0.0;
  max = ar[0];
  min = ar[0];

  for (int i = 0; i < count; ++i) {
    quarter_sales[i] = ar[i];
    total += ar[i];
    if (ar[i] > max) {
      max = ar[i];
    }
    if (ar[i] < min) {
      min = ar[i];
    }
  }

  for (int i = count; i < QUARTERS; ++i) {
    quarter_sales[i] = 0.0;
  }

  average = total / count;
}
sales::sales() {
  double total = 0.0;
  max = 0.0;
  min = 0.0;

  cout << "Enter sales for 4 quarters (enter -1 to stop):" << endl;
  for (int i = 0; i < QUARTERS; ++i) {
    cout << "Quarter " << (i + 1) << ": ";
    double sale;
    cin >> sale;

    if (sale == -1) {
      break;
    }

    quarter_sales[i] = sale;
    total += sale;

    if (i == 0 || sale > max) {
      max = sale;
    }
    if (i == 0 || sale < min) {
      min = sale;
    }
  }

  for (int i = 0; i < QUARTERS; ++i) {
    if (quarter_sales[i] == 0.0 && i < QUARTERS - 1) {
      quarter_sales[i] = 0.0;
    }
  }

  average = total / QUARTERS;
}

void sales::showSales() {
  cout << "Sales data:" << endl;
  for (int i = 0; i < QUARTERS; ++i) {
    cout << "Quarter " << (i + 1) << ": " << quarter_sales[i] << endl;
  }
  cout << "Average: " << average << endl;
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
}