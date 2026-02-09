#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<ll> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        if(k%2==1) {
            for(int i=0;i<n;i++) {
                if(a[i]%2==0) cout << a[i] << ' ';
                else cout << a[i]+k << ' ';
            }
        } else {
            for(int i=0;i<n;i++) cout << a[i]+(a[i]%(k+1))*k << ' ';
        }
        cout << '\n';
    }
}
