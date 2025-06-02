#ifndef SALES_H_
#define SALES_H_
class sales {
  static const int QUARTERS = 4; // number of quarters
  double quarter_sales[QUARTERS]; // sales for each quarter
  double average;
  double max;
  double min;
public:
 // copies the lesser of 4 or n items from the array ar
 // to the sales member of s and computes and stores the
 // average, maximum, and minimum values of the entered items;
 // remaining elements of sales, if any, set to 0
 sales(const double ar[], int n);
 // gathers sales for 4 quarters interactively, stores them
 // in the sales member of s and computes and stores the
 // average, maximum, and minimum values
 sales();
 // display all information in structure s
 void showSales();
};
#endif