#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<ll> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];

        ll cnt=0;
        for(int i=1;i<=n;i++) {
            if(i%2==0) {
                if(i+1<=n && a[i]<a[i+1]) {
                    cnt += a[i+1]-a[i];
                    a[i+1] = a[i];
                }
                if(i-1>=1 && a[i]<a[i-1]) {
                    cnt += a[i-1]-a[i];
                    a[i-1] = a[i];
                }
                if(i+1<=n && i-1>=1 && a[i]<a[i-1]+a[i+1]) {
                    cnt += a[i-1]+a[i+1] - a[i];
                    a[i+1] -= a[i-1]+a[i+1] - a[i];
                }
            }
        }
        cout << cnt << '\n';
    }
}
