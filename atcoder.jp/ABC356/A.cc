#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, L, R; cin >> N >> L >> R;
    for(int i=1;i<=N;i++) {
        if(L<=i && i<=R) cout << R-(i-L) << " ";
        else cout << i << " ";
    }
}