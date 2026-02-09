#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio; cin.tie(); cout.tie();
    int t; cin >> t;
    while(t-->0) {
        int idx=0, highestQ=0, n; cin >> n;

        for(int i=1;i<=n;i++) {
            int a, b; cin >> a >> b;
            if(a<=10 && highestQ<b) {
                highestQ=b;
                idx=i;
            }
        }
        cout << idx << endl;
    }
}