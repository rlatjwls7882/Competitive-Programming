#include <stdio.h>

int main () {
   int A, B; scanf("%d%d", &A, &B);
   if(A>B) {
      int tmp=A;
      A=B;
      B=tmp;
   }

   if(A==1&&B==2) {
      printf("3");
   } else if(A==1) {
      printf("2");
   } else {
      printf("1");
   }
}