#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;

        int cnt=1;
        for(int i=0;i<s.length();i++) {
            cnt = max(cnt, s[i]-'0');
        }
        cout << cnt << '\n';
    }
}