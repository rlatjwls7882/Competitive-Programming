#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200'000];

struct element {
    ll x, z;
};

struct element1 {
    ll x, z;
    bool operator<(element1 a) const {
        return z<a.z;
    }
};

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll n, m, k; cin >> n >> m >> k;
        for(int i=0;i<m;i++) cin >> a[i];
        sort(a, a+m);

        vector<element> v;
        for(int i=0;i<n;i++) {
            ll x, y, z; cin >> x >> y >> z;
            k-=y;
            v.push_back({x, z-y});
        }
        sort(v.begin(), v.end(), [](auto a, auto b) {return a.x<b.x;});

        if(k<0) {
            cout << "0\n";
            continue;
        }

        int idx=0, cnt=0;
        priority_queue<element1> pq;
        for(int i=0;i<m;i++) {
            while(idx<n && v[idx].x<=a[i]) pq.push({v[idx].x, v[idx].z}), idx++;
            if(pq.size()) {
                pq.pop();
                cnt++;
            }
        }

        vector<element> remain;
        while(!pq.empty()) {
            remain.push_back({pq.top().x, pq.top().z});
            pq.pop();
        }
        while(idx<n) remain.push_back(v[idx++]);
        sort(remain.begin(), remain.end(), [](auto a, auto b) {return a.z<b.z;});

        for(auto cur:remain) {
            if(cur.z<=k) {
                k-=cur.z;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}