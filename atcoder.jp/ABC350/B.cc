#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int N, Q; cin >> N >> Q;
    
    bool chk[N] = {0, };
    while(Q-->0) {
        int T; cin >> T;
        chk[T-1]^=true; 
    }

    int cnt=0;
    for(int i=0;i<N;i++) {
        if(!chk[i]) {
            cnt++;
        }
    }
    cout << cnt;
}