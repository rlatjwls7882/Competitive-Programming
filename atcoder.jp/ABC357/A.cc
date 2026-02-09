#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M; cin >> N >> M;

    int cnt=0;
    while(N-->0) {
        int tmp; cin >> tmp;
        M-=tmp;
        if(M>=0) cnt++;
        else break;
    }
    cout << cnt;
}