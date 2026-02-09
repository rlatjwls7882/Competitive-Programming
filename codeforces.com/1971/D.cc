#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;
        int cnt=1; bool contain01 = false;
        for(int i=1;i<s.length();i++) {
            if(s[i-1]=='1' && s[i]=='0') {
                cnt++;
            } else if(s[i-1]=='0' && s[i]=='1') {
                if(!contain01) {
                    contain01=true;
                } else {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}