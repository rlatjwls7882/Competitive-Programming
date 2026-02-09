#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll k, x; cin >> k >> x;

        ll total = 1LL<<k+1;
        ll a = 1LL<<k;
        vector<ll> res;
        while(a!=x) {
            if(x<total-x) {
                x<<=1;
                res.push_back(1);
            } else {
                x -= (total-x);
                res.push_back(2);
            }
        }

        cout << res.size() << '\n';
        for(int i=res.size()-1;i>=0;i--) cout << res[i] << ' ';
        cout << '\n';
    }
}