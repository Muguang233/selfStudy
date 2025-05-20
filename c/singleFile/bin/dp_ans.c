#include <stdio.h>
#include <stdlib.h>

void print_list(long long *list) {
  for(int i = 0; i < 20; i++) printf("list[%d]:%lld\n",i, list[i]%100000007);
}



int main(void)
{
    long long n = 0, s = 0, a = 0, b = 0, number = 0;
    long long i = 0, j = 0, x = 0, max = 0;
    long long *list = NULL;
    scanf("%lld %lld %lld %lld", &n, &s, &a, &b);    
    max = (n*(n-1))/2;
    list = (long long*)calloc((max+1),sizeof(long long));
    list[0] = list[1] = 1;
    //4
    //2 3
    //j = 3 .. 2
    //3 
    //j = 6 .. 5 .. 4 .. 3
    for (i = 2; i < n; ++i) {
        for (j = i*(i+1)/2; j >= i; --j) {
            list[j] = (list[j] + list[j-i])%100000007;
        }
    }
    for (i = 0; i <= max; ++i) {
        x = s - (a*i-(((n*(n-1))/2)-i)*b);
        // x = 10 - (2*i(0->6) - ((4*(4-1))/2 - i(0->6)) * 3 )
        
        if (0 == x%n) {
            if (0 == i) {
                number = (number + 1)%100000007;
            }
            else if (0 < i) {
                number = (number + list[i])%100000007;
            }
        }
    }
    printf("%lld\n", number);
    free(list);
    list = NULL;
    return (0);
}