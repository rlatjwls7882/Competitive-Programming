#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s; cin >> s;

    int cnt=0;
    for(int i=0;i<s.size();i++) {
        for(int j=i+1;j<s.size();j++) {
            for(int k=j+1;k<s.size();k++) {
                if(s[i]=='Q' && s[j]=='A' && s[k]=='Q') {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}