#include<bits/stdc++.h>
using namespace std;

int a[300'001], cnt[300'001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, q; cin >> n >> q;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a, a+n+1);
    for(int i=0;i<=n;i++) cnt[i] = a[i]-i;

    while(q--) {
        int x, y; cin >> x >> y;

        int f = upper_bound(a, a+n+1, x)-a-1;
        int xx = x-f-1;
        if(a[f]==x) xx++;
        int l=f, r=n;
        while(l<r) {
            int m=l+r+1>>1;
            if(cnt[m]-xx>=y) r=m-1;
            else l=m;
        }
        cout << a[l]+(y-(cnt[l]-xx)) << '\n';
    }
}