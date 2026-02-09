#include<stdio.h>

int main(void) {
   int N; scanf("%d", &N); N%=10;

   if(N==3) {
      printf("bon");
   } else if(N==0 || N==1 || N==6 || N==8) {
      printf("pon");
   } else {
      printf("hon");
   }
}