#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        string s; cin >> s;

        int maxIdx=1;
        for(int i=0;i<n;i++) {
            maxIdx = max(maxIdx, s[i]-'a'+1);
        }
        cout << maxIdx << endl;
    }
}