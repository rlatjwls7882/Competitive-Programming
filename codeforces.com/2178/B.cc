#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cnt=0;
        if(s[0]=='u') {
            cnt++;
            s[0]='s';
        }
        if(s.back()=='u') {
            cnt++;
            s.back()='s';
        }
        for(int i=1;i<s.length()-1;i++) {
            if(s[i]=='u' && s[i+1]!='s') {
                s[i+1]='s';
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}