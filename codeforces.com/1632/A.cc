#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    
    while(t-->0) {
        int n; string s; cin >> n >> s;
        int cnt1=0, cnt2=0;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='0') {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        
        if(cnt1<2 && cnt2<2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}