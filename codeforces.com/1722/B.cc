#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;

        string color[2];
        for(int i=0;i<2;i++) {
            cin >> color[i];
        }

        bool chk=true;
        for(int i=0;i<n;i++) {
            if(color[0][i] != color[1][i] && (color[0][i]=='R' || color[1][i]=='R')) {
                chk=false;
                break;
            }
        }
        cout << (chk?"YES\n":"NO\n");
    }
}