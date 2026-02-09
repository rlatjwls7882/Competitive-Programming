#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        string S;
        for(int i=0;i<8;i++) {
            cin >> S;
            for(int j=0;j<8;j++) {
                if('a'<=S[j]&&S[j]<='z') {
                    cout << S[j];
                }
            }
        }
        cout << endl;
    }
}