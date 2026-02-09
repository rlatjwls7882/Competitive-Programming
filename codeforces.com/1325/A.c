#include<stdio.h>

int main(void) {
    int t; scanf("%d", &t);

    while(t-->0) {
        int n; scanf("%d", &n);
        printf("1 %d\n", n-1);
    }
}