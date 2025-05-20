#include<stdio.h>
void An(int n, int i) {
	if (i == n) { printf("sin(%d)", i); return; }
	else if (i % 2) printf("sin(%d-", i);
	else printf("sin(%d+", i);
	An(n, i + 1);
	printf(")");
}
void Sn(int n, int i) {
	if(n==1) { An(i, 1), printf("+%d", n + 1 - i); return; }
	else if (i == 1) { An(i, 1), printf("+%d)", n + 1 - i); return; }
	printf("(");
	Sn(n, i - 1);
	if (i == n) An(i, 1), printf("+%d", n + 1 - i);
	else An(i, 1), printf("+%d)", n + 1 - i);
}
int main(void) {
	int n;
	scanf("%d", &n);
	Sn(n, n);
	printf("\n");
	return 0;
}