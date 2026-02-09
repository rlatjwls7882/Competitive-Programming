#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    for(int i=1;i<s.length();i+=2) {
        cout << s[i] << s[i-1];
    }
}