#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        if(n%4==0) {
            cout << "YES\n";
            for(int i=2;i<=n;i+=2) {
                cout << i << " ";
            }
            for(int i=1;i<=n-2;i+=2) {
                cout << i << " ";
            }
            cout << n-1+n/2 << '\n';
        } else {
            cout << "NO\n";
        }
    }
}