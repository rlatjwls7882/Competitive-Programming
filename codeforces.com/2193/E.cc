#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);
const int MAX = 200'001;

int n;
ll a[MAX], b[MAX];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i=1;i<=n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        sort(a+1, a+n+1, greater<int>());

        ll res=0, cnt=0, idx=0;
        for(int i=1;i<=n;i++) {
            b[idx]--;
            if(b[idx]==0) idx++;
            res = max(res, a[i]*idx);
        }
        cout << res << '\n';
    }
}