#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string s; cin >> s;
        int first1=-1, last1=-1;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='1') {
                if(first1==-1) {
                    first1=i;
                }
                last1=i;
            }
        }

        int cnt=0;
        for(int i=first1;i<=last1;i++) {
            if(s[i]=='0') {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}