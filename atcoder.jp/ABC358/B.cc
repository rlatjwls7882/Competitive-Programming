#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, A; cin >> N >> A;
    int cur=0;
    while(N-->0) {
        int T; cin >> T;
        cur = max(cur, T)+A;
        cout << cur << '\n';
    }
}