#include <stdio.h>

int main () {
   int K, X; scanf("%d%d", &K, &X);
   
   if(K*500>=X) {
      printf("Yes");
   } else {
      printf("No");
   }
}