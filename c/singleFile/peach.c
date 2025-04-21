#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int peaches = 1;

    for (int i = N - 1; i >= 1; i--) {
        peaches = (peaches + 1) * 2;
    }
    printf("%d\n", peaches);
    return 0;
}