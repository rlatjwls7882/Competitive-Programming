#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;

        for(char i='1';i<='8';i++) {
            if(s[1]!=i) {
                cout << s[0] << i << '\n';
            }
        }
        for(char i='a';i<='h';i++) {
            if(s[0]!=i) {
                cout << i << s[1] << '\n';
            }
        }
    }
}