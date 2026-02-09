#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a1, a2, a3, a4; cin >> a1 >> a2 >> a3 >> a4;
    string s; cin >> s;

    int cnt=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]=='1') {
            cnt += a1;
        } else if(s[i]=='2') {
            cnt += a2;
        } else if(s[i]=='3') {
            cnt += a3;
        } else {
            cnt += a4;
        }
    }
    cout << cnt;
}