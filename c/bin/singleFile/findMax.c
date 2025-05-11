#include<stdio.h>
int main()
{
    int a,b,c;
    scanf(" %d %d %d", &a, &b, &c);
    int curr_max = a;
    if (b > curr_max) {
      curr_max = b;
    }
    if (c > curr_max) {
      curr_max = c;
    } 
    printf("%d\n", curr_max);
    return 0;
}