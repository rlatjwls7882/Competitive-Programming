#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll s, k, m; cin >> s >> k >> m;
        ll cnt = (m/k);
        if(cnt%2) cout << max(0LL, min(k, s)-(m-cnt*k)) << '\n';
        else cout << max(0LL, s-(m-cnt*k)) << '\n';
    }
}