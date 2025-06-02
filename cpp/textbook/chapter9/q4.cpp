#include <iostream>
#include "sales.h"
using namespace std;
using namespace SALES;
int main() {
  Sales s1;
  double salesData[QUARTERS] = {1000.0, 2000.0, 1500.0, 2500.0};
   
  setSales(s1, salesData, QUARTERS);
  showSales(s1);
   
  Sales s2;
  setSales(s2);
  showSales(s2);
  
  return 0;
}