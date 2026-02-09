#include<stdio.h>

int main(void) {
   int K, A, B; scanf("%d %d %d", &K, &A, &B);
   printf("%s", (A+K-1)/K<=B/K?"OK":"NG");
}