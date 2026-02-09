#include<bits/stdc++.h>
using namespace std;

int n, k;
string s;

void solve() {
    int len=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') len=0;
        else len++;
        if(len>=k) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    vector<int> ret(n);
    int cnt=n;
    for(int i=0;i<n;i++) {
        if(s[i]=='0') ret[i] = cnt--;
    }
    for(int i=0;i<n;i++) {
        if(!ret[i]) ret[i] = cnt--;
    }
    for(int i=0;i<n;i++) cout << ret[i] << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n >> k >> s;
        solve();
    }
}
