#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int a, b, c, x, y; cin >> a >> b >> c >> x >> y;

        int cnt1 = min(a, x);
        a -= cnt1;
        x -= cnt1;

        int cnt2 = min(b, y);
        b -= cnt2;
        y -= cnt2;

        if(x+y<=c) cout << "YES\n";
        else cout << "NO\n";
    }
}