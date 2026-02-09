#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll cnt = min({a, b, c});
        a -= cnt;
        b -= cnt;
        c -= cnt;
        cnt += min({a, c, (a+b+c)/3});
        cout << cnt << '\n';
    }
}