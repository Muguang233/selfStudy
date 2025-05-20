#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main() {
  int n;
  scanf("%d", &n);
  for(int i = 2; i <= n; i++) if(is_prime(i)) printf("%d\n", i);
  return 0;
}