#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> g(n);
        for(int i=0;i<n;i++) cin >> g[i];
        sort(g.begin(), g.end(), greater<int>());

        ll sum=0;
        for(int i=0;i<n;i+=2) sum += g[i];
        cout << sum << '\n';
    }
}
