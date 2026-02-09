#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        char s[3];
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                cin >> s[j];
            }
            sort(s, s+3);

            if(s[0]=='?') {
                if(s[1]=='B') {
                    cout << 'A' << endl;
                } else if(s[2]=='C') {
                    cout << 'B' << endl;
                } else {
                    cout << 'C' << endl;
                }
            }
        }
    }
}