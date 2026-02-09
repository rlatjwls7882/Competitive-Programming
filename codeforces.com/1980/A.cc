#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m; cin >> n >> m;
        int cnt[7] = {0, };
        
        string s; cin >> s;
        for(int i=0;i<n;i++) {
            cnt[s[i]-'A']++;
        }

        int require=0;
        for(int i=0;i<7;i++) {
            if(m>cnt[i]) {
                require += m-cnt[i];
            }
        }
        cout << require << '\n';
    }
}