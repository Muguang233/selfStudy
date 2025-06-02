#include <iostream>
#include "sales.h"
using namespace std;

int main() {
    double arr[4] = {1000.0, 2000.0, 1500.0, 2500.0};
    sales s1(arr, 4);
    s1.showSales();
    cout << endl;
    sales s2;
    s2.showSales();
    cout << "End of program." << endl;
    cout << "Press Enter to exit." << endl;
    cin.ignore();
    cin.get(); 
    cout << "Exiting program." << endl;
    cin.ignore(); 
    cin.get(); 
    cout << "Thank you for using the program!" << endl;
    return 0;
}