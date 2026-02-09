#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[300'001];
bool vis[300'001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];

    ll res=0;
    for(int i=1;i<=n;i++) {
        ll cnt=0, cur=i;
        while(!vis[cur]) {
            cnt++;
            vis[cur]=true;
            cur = a[cur];
        }
        res += cnt*(cnt-1)/2;
    }
    cout << res;
}