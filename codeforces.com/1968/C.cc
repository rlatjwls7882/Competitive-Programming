#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;

        int lastVal = 501;
        cout << lastVal;
        for(int i=0;i<n-1;i++) {
            int x; cin >> x;
            lastVal += x;
            cout << " " << lastVal;
        }
        cout << '\n';
    }
}