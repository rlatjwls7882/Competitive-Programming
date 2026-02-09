#include<bits/stdc++.h>
using namespace std;

struct Edge {
    int v;
    long long c;
    Edge(int v, long long c) {
        this->v=v;
        this->c=c;
    }

    bool operator<(const Edge a) const {
        return this->c>a.c;
    }
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M; cin >> N >> M;
    int A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }

    vector<vector<Edge>> connect = vector<vector<Edge>>(N);
    while(M-->0) {
        int u, v, b; cin >> u >> v >> b;
        connect[u-1].push_back(Edge(v-1, b));
        connect[v-1].push_back(Edge(u-1, b));
    }

    long long shortestPath[N]; fill(shortestPath, shortestPath+N, -1);
    priority_queue<Edge> pq; pq.push(Edge(0, A[0]));
    while(!pq.empty()) {
        Edge cur = pq.top(); pq.pop();
        if(shortestPath[cur.v]!=-1) continue;
        shortestPath[cur.v]=cur.c;
        for(Edge next:connect[cur.v]) {
            if(shortestPath[next.v]==-1) {
                next.c += cur.c + A[next.v];
                pq.push(next);
            }
        }
    }

    for(int i=1;i<N;i++) {
        cout << shortestPath[i] << ' ';
    }
}