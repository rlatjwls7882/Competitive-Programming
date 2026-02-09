#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;

        int chars[26] = {0, };
        for(int i=0;i<s.length();i++) {
            chars[s[i]-'a']++;
        }

        int cnt1=0, cnt2=0;
        for(int i=0;i<26;i++) {
            if(chars[i]>=2) cnt2++;
            cnt1 += chars[i]%2;
        }

        if(s.length()<=2 || cnt1>1 || cnt2==1) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}