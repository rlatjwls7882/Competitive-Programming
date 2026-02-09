#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    if(s[0]==s[1] && s[1]==s[2]) cout << -1;
    else if(s[0]==s[2]) cout << s[1];
    else if(s[1]==s[2]) cout << s[0];
    else cout << s[2];
}