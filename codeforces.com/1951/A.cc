#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;

        int cnt=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='1') {
                cnt++;
            }
        }

        if(cnt!=2) {
            if(cnt%2==0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            bool chk=true;
            for(int i=0;i<n-1;i++) {
                if(s[i]=='1' && s[i+1]=='1') {
                    chk=false;
                }
            }
            cout << (chk?"YES\n":"NO\n");
        }
        
    }
}