#include<stdio.h>
#include<math.h>

int main(void) {
    int t; scanf("%d", &t);

    while(t-->0) {
        int n; scanf("%d", &n);
        
        int pile1 = pow(2, n);
        for(int i=1;i<n/2;i++) {
            pile1 += pow(2, i);
        }

        int pile2=0;
        for(int i=n/2;i<n;i++) {
            pile2 += pow(2, i);
        }
        printf("%d\n", pile1-pile2);
    }
}