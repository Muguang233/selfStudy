#include <stdio.h>
#include <stdbool.h>

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
  int n, m;
  scanf("%d %d", &m, &n);
  int sum = 0;
  for(int i = m; i <= n; i++) {
    if(isprime(i)) sum+=i;
  }
  printf("%d\n", sum);
  return 0;
}