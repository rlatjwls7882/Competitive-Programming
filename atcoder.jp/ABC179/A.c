#include<stdio.h>
#include<string.h>

int main(void) {
    char S[1001]; scanf("%s", S);

    if(S[strlen(S)-1]=='s') {
        printf("%ses", S);
    } else {
        printf("%ss", S);
    }
}