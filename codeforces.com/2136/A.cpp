#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if((a+1)*2<b || a>(b+1)*2 || a>c || b>d || (c-a+1)*2<d-b || c-a>(d-b+1)*2) cout << "NO\n";
        else cout << "YES\n";
    }
}