#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);

int a[200001], psum[200001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, q; cin >> n >> q;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=1;i<=n;i++) {
            int b; cin >> b;
            if(a[i]<b) a[i]=b;
        }
        for(int i=n-1;i>0;i--) {
            a[i]=max(a[i], a[i+1]);
        }

        for(int i=1;i<=n;i++) {
            psum[i]=psum[i-1]+a[i];
        }

        while(q--) {
            int l,r ; cin >> l>>r;
            cout << psum[r]-psum[l-1] << ' ';
        }
        cout << '\n';
    }
}