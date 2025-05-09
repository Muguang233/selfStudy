#include <stdio.h>

int findLeft(int n) {
  int ppl[n];
  for(int i = 0; i < n; i++) {
    ppl[i] = i + 1;
  }
  int count = 0;
  int remain = n;

  while(remain > 1) {
    for(int i = 0; i < n; i++) {
      if (ppl[i] == 0) continue;
      count++;
      if(count == 3) {
        ppl[i] = 0;
        remain--;
        count = 0;
      }
    }
  }
  for(int i = 0; i < n; i++) if(ppl[i] != 0) return ppl[i];
  return -1;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", findLeft(n));
  return 0;
}