#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 5'000;

ll w[MAX], minFuel[MAX];
vector<vector<int>> conn(MAX);

struct pos {
    ll idx, cost, fuel;
    bool operator<(const pos p) const {
        if(cost!=p.cost) return cost > p.cost;
        return fuel > p.fuel;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i=0;i<n;i++) cin >> w[i];
    while(m--) {
        int u, v; cin >> u >> v;
        conn[u-1].push_back(v-1);
        conn[v-1].push_back(u-1);
    }

    fill(minFuel, minFuel+n, LONG_LONG_MAX);
    priority_queue<pos> pq; pq.push({0, w[0], 0});
    minFuel[0]=0;
    while(!pq.empty()) {
        pos cur = pq.top(); pq.pop();
        for(int next:conn[cur.idx]) {
            pos n = {next, cur.cost+w[next], cur.cost+cur.fuel};
            if(minFuel[next]>n.fuel) {
                minFuel[next] = n.fuel;
                pq.push(n);
            }
        }
    }
    for(int i=0;i<n;i++) cout << minFuel[i] << '\n';
}