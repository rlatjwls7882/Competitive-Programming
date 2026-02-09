#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 3e5+1;
const ll MOD = 998244353;

ll a[MAX], pSum[MAX];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> a[i];

    sort(a+1, a+n+1);
    for(int i=1;i<=n;i++) pSum[i] = pSum[i-1]+a[i];

    ll res=0;
    for(int i=1;i<=m;i++) {
        ll b; cin >> b;
        int idx = lower_bound(a, a+n+1, b)-a-1;
        res = (res+b*idx-pSum[idx]+(pSum[n]-pSum[idx])-b*(n-idx))%MOD;
    }
    cout << res;
}