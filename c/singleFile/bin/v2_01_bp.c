#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int value;
  int weight;
  int *dp = malloc(sizeof(int)*(m+1));
  memset(dp, 0, sizeof(int)*(m+1));
  for(int i = 0; i < n; i++) {
    scanf(" %d %d", &weight, &value);
    for(int j = m; j >= weight; j--) {
      dp[j] = dp[j] > dp[j-weight] + value ? dp[j] : dp[j-weight] + value;
    }
  }
  printf("%d\n", dp[m]);
  return 0;
}