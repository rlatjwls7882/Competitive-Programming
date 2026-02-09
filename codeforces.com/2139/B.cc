#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n, m; cin >> n >> m;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<ll>());

        ll sum=0;
        for(int i=0;i<n && m>0;i++) sum += a[i]*m--;
        cout << sum << '\n';
    }
}