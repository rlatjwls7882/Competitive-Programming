#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; string s; cin >> n >> s;
        int cnt=0;
        for(int i=0;i<n;i++) if(s[i]=='1') cnt++;

        int need=0;
        for(int i=n-1;i>=n-cnt;i--) {
            if(s[i]=='0') need++;
        }
        cout << need << '\n';
    }
}
