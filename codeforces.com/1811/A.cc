#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, d; cin >> n >> d;
        string s; cin >> s;
        bool chk=false;
        for(int i=0;i<s.length();i++) {
            if(s[i]-'0'<d && !chk) {
                cout << d;
                chk=true;
            }
            cout << s[i];
        }
        if(!chk) {
            cout << d;
        }
        cout << '\n';
    }
}