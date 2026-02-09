#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    if(s[s.length()-2]=='e' && s[s.length()-1]=='r') cout << "er";
    else cout << "ist";
}