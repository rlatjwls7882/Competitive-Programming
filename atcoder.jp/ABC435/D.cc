#include<bits/stdc++.h>
using namespace std;

const int MAX = 300'001;

bool chk[MAX];
int parent[MAX];
vector<vector<int>> conn(MAX);

int find(int x) {
    if(x==parent[x]) return x;
    return parent[x] = find(parent[x]);
}

bool merge(int x, int y) {
    x = find(x);
    y = find(y);
    if(x==y) return false;
    if(x<y) parent[y]=x;
    else parent[x]=y;
    return true;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i=1;i<=n;i++) parent[i]=i;
    while(m--) {
        int u, v; cin >> u >> v;
        conn[v].push_back(u);
    }

    int q; cin >> q;
    while(q--) {
        int a, b; cin >> a >> b;
        if(a==1) {
            queue<int> q;
            if(!chk[find(b)]) q.push(b);
            while(!q.empty()) {
                int cur = q.front(); q.pop();
                for(int next:conn[cur]) {
                    if(merge(cur, next)) q.push(next);
                }
            }
            chk[find(b)]=true;
        } else {
            cout << (chk[find(b)] ? "Yes\n" : "No\n");
        }
    }
}