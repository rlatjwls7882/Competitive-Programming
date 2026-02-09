#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int L, R; cin >> L >> R;

    string s="atcoder";
    for(int i=L-1;i<=R-1;i++) {
        cout << s[i];
    }
}