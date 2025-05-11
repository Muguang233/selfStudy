#include <stdio.h>

int main() {
    for (int num = 1000; num <= 9999; num++) {
        int fh = num / 100;  
        int sh = num % 100;
        int sum = fh + sh;
        if (sum * sum == num) {
            printf("%d ", num);
        }
    }
    return 0;
}