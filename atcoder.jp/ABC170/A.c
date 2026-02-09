#include<stdio.h>

int main(void) {
	for(int i=1;i<=5;i++) {
		int x; scanf("%d", &x);
		if(x==0) {
			printf("%d", i);
			break;
		}
	}
}