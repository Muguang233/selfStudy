#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(const T arr[], int size) {
    T maxValue = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}
