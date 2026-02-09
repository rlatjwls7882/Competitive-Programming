#include<stdio.h>

int main(void) {
	char S[4]; scanf("%s", S);
	if(S[0]=='R'&&S[1]=='R'&&S[2]=='R') {
		printf("3");
	} else if(S[0]=='R'&&S[1]=='R'||S[1]=='R'&&S[2]=='R') {
		printf("2");
	} else if(S[0]=='R'||S[1]=='R'||S[2]=='R') {
		printf("1");
	} else {
		printf("0");
	}
}