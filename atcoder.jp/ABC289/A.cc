#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;

    for(int i=0;i<s.length();i++) {
        if(s[i]=='1') cout << 0;
        else cout << 1;
    }
}