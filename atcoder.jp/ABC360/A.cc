#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    if(s[0]=='R' || s[2]=='M') cout << "Yes";
    else cout << "No";
}