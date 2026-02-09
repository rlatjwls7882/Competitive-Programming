#include<stdio.h>

int main () {
   int N, M; scanf("%d %d", &N, &M);
   printf("%d", N*(N-1)/2+M*(M-1)/2);
}