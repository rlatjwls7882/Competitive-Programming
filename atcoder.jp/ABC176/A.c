#include<stdio.h>

int main(void) {
	int N, X, T; scanf("%d%d%d", &N, &X, &T);
	printf("%d", (N+X-1)/X*T);
}