#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, w; cin >> n >> w;
        vector<ll> c(2*w);
        for(int i=0;i<n;i++) {
            ll cur; cin >> cur;
            c[i%(2*w)]+=cur;
        }

        ll cur=0;
        for(int i=0;i<w;i++) cur+=c[i];

        ll idx=0, res=cur;
        while(idx<2*w) {
            cur+=c[(idx+w)%(2*w)];
            cur-=c[idx];
            idx++;
            res = min(res, cur);
        }
        cout << res << '\n';
    }
}