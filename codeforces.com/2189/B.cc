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
        ll n, x; cin >> n >> x;

        vector<ll> mov;
        while(n--) {
            ll a, b, c; cin >> a >> b >> c;
            x-=a*(b-1);
            if(a*b-c>0) mov.push_back(a*b-c);
        }
        sort(mov.begin(), mov.end());

        if(x<=0) {
            cout << "0\n";
            continue;
        } else if(mov.empty()) {
            cout << "-1\n";
        } else {
            ll cur=mov.back();
            cout << (x+cur-1)/cur << '\n';
        }
    }
}