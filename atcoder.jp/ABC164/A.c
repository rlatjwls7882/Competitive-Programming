#include<stdio.h>

int main(void) {
   int S, W; scanf("%d %d", &S, &W);
   printf("%s", W>=S?"unsafe":"safe");
}