#include <stdio.h>
#include <string.h>

int main () {
   char s[4]; scanf("%s", s);

   if(strcmp(s, "SUN")==0) {
      printf("7");
   } else if(strcmp(s, "MON")==0) {
      printf("6");
   } else if(strcmp(s, "TUE")==0) {
      printf("5");
   } else if(strcmp(s, "WED")==0) {
      printf("4");
   } else if(strcmp(s, "THU")==0) {
      printf("3");
   } else if(strcmp(s, "FRI")==0) {
      printf("2");
   } else {
      printf("1");
   }
}