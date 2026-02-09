#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;
    
    while(t-->0) {
        int n; cin >> n;
        string S; cin >> S;

        int x=0, y=0;
        bool chk=false;
        for(int i=0;i<S.length();i++) {
            if(S[i]=='R') {
                x++;
            } else if(S[i]=='L') {
                x--;
            } else if(S[i]=='U') {
                y++;
            } else {
                y--;
            }
            if(x==1 && y==1) {
                chk=true;
                break;
            }
        }

        cout << (chk?"YES\n":"NO\n");
    }
}