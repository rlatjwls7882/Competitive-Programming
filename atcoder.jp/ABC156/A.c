#include<stdio.h>

int main () {
   int N, R; scanf("%d %d", &N, &R);

   if(N>10) {
      printf("%d", R);
   } else {
      printf("%d", R+100*(10-N));
   }
}