#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;

        int chars[26] = {0, };
        for(int i=0;i<s.length();i++) {
            chars[s[i]-'A']++;
        }

        int cnt=0;
        for(int i=0;i<26;i++) {
            if(chars[i]>=i+1) {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}