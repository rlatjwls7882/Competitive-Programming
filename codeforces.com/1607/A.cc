#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string key; cin >> key;
        map<char, int> m;
        for(int i=0;i<key.length();i++) {
            m[key[i]]=i;
        }

        string s; cin >> s;
        int cnt=0;
        for(int i=1;i<s.length();i++) {
            cnt += abs(m[s[i]]-m[s[i-1]]);
        }
        cout << cnt << '\n';
    }
}