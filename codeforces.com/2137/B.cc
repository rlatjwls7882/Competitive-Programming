#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) {
            int p; cin >> p;
            cout << n-p+1 << ' ';
        }
        cout << '\n';
    }
}
