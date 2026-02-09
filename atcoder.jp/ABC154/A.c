#include <stdio.h>
#include <string.h>

int main () {
   char S[11], T[11]; scanf("%s %s", S, T);
   int A, B; scanf("%d %d", &A, &B);
   char U[11]; scanf("%s", U);

   if(strcmp(S, U)==0) {
      printf("%d %d", A-1, B);
   } else {
      printf("%d %d", A, B-1);
   }
}