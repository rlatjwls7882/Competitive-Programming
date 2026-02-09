#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, k; cin >> n >> k;
        string s; cin >> s;
        
        int cnt=0;
        for(int i=0;i<n;) {
            if(s[i]=='B') {
                cnt++;
                i+=k;
            } else {
                i++;
            }
        }
        cout << cnt << '\n';
    }
}