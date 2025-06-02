#include <iostream>
#include <algorithm> 
using namespace std;
template <typename T>
T max5(const T arr[5]) {
    T maxValue = arr[0];
    for (int i = 1; i < 5; ++i) {
        maxValue = std::max(maxValue, arr[i]);
    }
    return maxValue;
}
int main() {
    int intArray[5] = {3, 1, 4, 1, 5};
    double doubleArray[5] = {2.71, 3.14, 1.41, 1.73, 0.577};

    cout << "Max of int array: " << max5(intArray) << endl;
    cout << "Max of double array: " << max5(doubleArray) << endl;

    return 0;
}