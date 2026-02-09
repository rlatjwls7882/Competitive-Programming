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
        ll n, k; cin >> n >> k;

        ll cnt=0;
        while(n>1) {
            if(n==k) break;
            ll a=n/2, b=n-n/2;
            if(a%2) n=a;
            else n=b;
            cnt++;
            if(k==a || k==b) {
                n=k;
                break;
            }
        }
        if(n==k) cout << cnt << '\n';
        else cout << "-1\n";
    }
}