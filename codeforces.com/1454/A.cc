#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        for(int i=1;i<=n;i++) {
            cout << i%n+1 << " ";
        }
        cout << '\n';
    }
}