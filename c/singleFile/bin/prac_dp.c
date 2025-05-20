#include <stdio.h>
#include <string.h>

#define MOD 100000007

int main() {
    int n, s, a, b;
    scanf("%d %d %d %d", &n, &s, &a, &b);
    
    int s_mod = s % n;
    if (s_mod < 0) s_mod += n; // 确保余数为正
    
    // 初始化dp数组
    int dp_prev[1001] = {0};
    int dp_curr[1001] = {0};
    dp_prev[0] = 1;
    
    for (int i = 1; i < n; ++i) {
        int w = n - i;
        // 计算delta_a和delta_b的模n余数
        int delta_a = (a % n) * (w % n) % n;
        int delta_b = (-(b % n) * (w % n)) % n;
        // 处理负数模的情况
        if (delta_b < 0) delta_b += n;
        
        memset(dp_curr, 0, sizeof(dp_curr));
        for (int r = 0; r < n; ++r) {
            if (dp_prev[r] == 0) continue;
            
            // 处理+a的情况
            int new_r = (r + delta_a) % n;
            dp_curr[new_r] = (dp_curr[new_r] + dp_prev[r]) % MOD;
            
            // 处理-b的情况
            new_r = (r + delta_b) % n;
            dp_curr[new_r] = (dp_curr[new_r] + dp_prev[r]) % MOD;
        }
        // 滚动数组交换
        memcpy(dp_prev, dp_curr, sizeof(dp_prev));
    }
    
    printf("%d\n", dp_prev[s_mod] % MOD);
    return 0;
}