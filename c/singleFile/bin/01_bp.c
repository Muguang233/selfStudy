#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int value[n];
  int weight[n];
  for(int i = 0; i < n; i++) scanf(" %d %d", &weight[i], &value[i]);
  int dp[n+1][m+1];
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= m; j++) dp[i][j] = 0;
  }
  //
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      
      if(j >= weight[i-1]) {
        dp[i][j] = dp[i-1][j] > dp[i-1][j-weight[i-1]] + value[i-1] ? dp[i-1][j] : dp[i-1][j-weight[i-1]] + value[i-1];
      } else {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  printf("%d\n", dp[n][m]);
  return 0;
}