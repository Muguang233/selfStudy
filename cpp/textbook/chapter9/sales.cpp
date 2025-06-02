#include <iostream>
#include "sales.h"
using namespace std;
namespace SALES {
void setSales( Sales & s, const double ar[], int n) {
  int count = (n < QUARTERS) ? n : QUARTERS;
  double total = 0.0;
  s.max = ar[0];
  s.min = ar[0];

  for (int i = 0; i < count; ++i) {
    s.sales[i] = ar[i];
    total += ar[i];
    if (ar[i] > s.max) {
      s.max = ar[i];
    }
    if (ar[i] < s.min) {
      s.min = ar[i];
    }
  }

  for (int i = count; i < QUARTERS; ++i) {
    s.sales[i] = 0.0;
  }

  s.average = total / count;
}
void setSales(Sales & s) {
  double total = 0.0;
  s.max = 0.0;
  s.min = 0.0;

  cout << "Enter sales for 4 quarters (enter -1 to stop):" << endl;
  for (int i = 0; i < QUARTERS; ++i) {
    cout << "Quarter " << (i + 1) << ": ";
    double sale;
    cin >> sale;

    if (sale == -1) {
      break;
    }

    s.sales[i] = sale;
    total += sale;

    if (i == 0 || sale > s.max) {
      s.max = sale;
    }
    if (i == 0 || sale < s.min) {
      s.min = sale;
    }
  }

  for (int i = 0; i < QUARTERS; ++i) {
    if (s.sales[i] == 0.0 && i < QUARTERS - 1) {
      s.sales[i] = 0.0;
    }
  }

  s.average = total / QUARTERS;
}

void showSales(const Sales & s) {
  cout << "Sales data:" << endl;
  for (int i = 0; i < QUARTERS; ++i) {
    cout << "Quarter " << (i + 1) << ": " << s.sales[i] << endl;
  }
  cout << "Average: " << s.average << endl;
  cout << "Max: " << s.max << endl;
  cout << "Min: " << s.min << endl;
}
}