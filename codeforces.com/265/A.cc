#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, t; cin >> s >> t;

    int idx=0;
    for(int i=0;i<t.length();i++) {
        if(s[idx]==t[i]) {
            idx++;
        }
    }
    cout << idx+1;
}