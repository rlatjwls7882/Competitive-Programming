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
        ll n, i; cin >> n >> i;
        if(i>2*n) {
            cout << -1;
        } else {
            if(i<n) cout << 9;
            else if(i==n) cout << 8;
            else if(i<2*n) cout << 0;
            else cout << 1;
        }
        cout << '\n';
    }
}