#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);

ll x[200'000], y[200'000];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, ax, ay, bx, by; cin >> n >> ax >> ay >> bx >> by;
        for(int i=0;i<n;i++) cin >> x[i];
        for(int i=0;i<n;i++) cin >> y[i];

        vector<pair<ll, ll>> pp;
        for(int i=0;i<n;i++) pp.push_back({x[i], y[i]});
        sort(pp.begin(), pp.end());

        vector<vector<pair<ll, ll>>> p(1);
        for(int i=0;i<n;i++) {
            if(p.back().empty() || p.back()[0].first==pp[i].first) p.back().push_back(pp[i]);
            else p.push_back({pp[i]});
        }
        p.push_back({{bx, by}});

        vector<pair<ll, ll>> dp = {{0, ay}, {0, ay}};
        for(int i=0;i<p.size();i++) {
            sort(p[i].begin(), p[i].end());
            ll a=dp[0].first+abs(dp[0].second-p[i][0].second)+abs(p[i].back().second-p[i][0].second);
            ll b=dp[1].first+abs(dp[1].second-p[i][0].second)+abs(p[i].back().second-p[i][0].second);
            ll c=dp[0].first+abs(dp[0].second-p[i].back().second)+abs(p[i].back().second-p[i][0].second);
            ll d=dp[1].first+abs(dp[1].second-p[i].back().second)+abs(p[i].back().second-p[i][0].second);
            if(a<b) dp[1]={a, p[i].back().second};
            else dp[1]={b, p[i].back().second};
            if(c<d) dp[0]={c, p[i][0].second};
            else dp[0]={d, p[i][0].second};
        }
        cout << bx-ax+min(dp[0].first, dp[1].first) << '\n';
    }
}