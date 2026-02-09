#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;

    int cnt=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]<='Z') cnt++;
    }

    if(cnt>s.length()/2) {
        for(int i=0;i<s.length();i++) {
            if(s[i]>='a') cout << (char)(s[i]-32);
            else cout << s[i];
        }
    } else {
        for(int i=0;i<s.length();i++) {
            if(s[i]<='Z') cout << (char)(s[i]+32);
            else cout << s[i];
        }
    }
}