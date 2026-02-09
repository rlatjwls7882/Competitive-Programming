#include<stdio.h>

int main () {
   int A, B, C; scanf("%d %d %d", &A, &B, &C);

   if(A==B&&A!=C || A==C&&A!=B || B==C&&B!=A) {
      printf("Yes");
   } else {
      printf("No");
   }
}