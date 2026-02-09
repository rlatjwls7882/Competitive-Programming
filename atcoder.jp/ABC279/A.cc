#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;

    int cnt=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='w') {
            cnt+=2;
        } else {
            cnt++;
        }
    }
    cout << cnt;
}