#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;
        bool chk=false;
        for(int i=1;i<s.length();i++) {
            if(s[i]!=s[i-1]) {
                chk=true;
                break;
            }
        }
        if(chk) {
            cout << "YES\n";
            for(int i=1;i<s.length();i++) {
                cout << s[i];
            }
            cout << s[0] << '\n';
        } else {
            cout << "NO\n";
        }
    }
}