#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;

        int chars[26] = {0, };
        chars[s[0]-'A']++;
        for(int i=1;i<s.length();i++) {
            if(s[i-1]!=s[i]) {
                chars[s[i]-'A']++;
            }
        }

        bool chk=true;
        for(int i=0;i<26;i++) {
            if(chars[i]>=2) {
                chk=false;
            }
        }
        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
}