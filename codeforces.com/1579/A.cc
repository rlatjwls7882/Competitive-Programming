#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;
        int a[3] = {0, };
        for(int i=0;i<s.length();i++) {
            a[s[i]-'A']++;
        }

        if(a[0]+a[2]==a[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}