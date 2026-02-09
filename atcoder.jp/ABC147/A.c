#include <stdio.h>

int main () {
   int A1, A2, A3; scanf("%d%d%d", &A1, &A2, &A3);
   printf("%s", (A1+A2+A3>=22?"bust":"win"));
}