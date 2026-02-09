#include <stdio.h>

int main () {
   int A, B; scanf("%d %d", &A, &B);
   printf("%d", (0>A-2*B?0:A-2*B));
}