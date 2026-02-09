#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

ll par[100'000], sz[100'000];

int find(int x) {
    if(par[x]==x) return x;
    return par[x]=find(par[x]);
}

void merge(int x, int y) {
    x=find(x);
    y=find(y);
    if(x==y) return;
    if(x<y) {
        par[x]=y;
        sz[y]+=sz[x];
    } else {
        par[y]=x;
        sz[x]+=sz[y];
    }
}

ll cnt(ll x) {
    x=find(x);
    return sz[x]*(sz[x]-1)/2;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) {
            par[i]=i;
            sz[i]=1;
        }

        int last; cin >> last;
        vector<vector<int>> diffs(n);
        for(int i=1;i<n;i++) {
            int cur; cin >> cur;
            diffs[abs(cur-last)].push_back(i);
            last=cur;
        }

        ll total=0;
        vector<ll> res;
        for(int i=n-1;i>=1;i--) {
            for(auto e:diffs[i]) {
                total-=cnt(e);
                total-=cnt(e-1);
                merge(e, e-1);
                total+=cnt(e);
            }
            res.push_back(total);
        }
        reverse(res.begin(), res.end());
        for(auto e:res) cout << e << ' ';
        cout << '\n';
    }
}