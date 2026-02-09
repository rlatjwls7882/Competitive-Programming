#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 0x3f3f3f3f;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vi inbound(n);
        vvi conn(n);

        for(int i=0;i<n-1;i++) {
            int u, v; cin >> u >> v;
            conn[u-1].push_back(v-1);
            conn[v-1].push_back(u-1);
            inbound[u-1]++;
            inbound[v-1]++;
        }

        int totalLeaf=0;
        for(int i=0;i<n;i++) {
            if(inbound[i]==1) totalLeaf++;
        }

        int minCnt = INF;
        for(int i=0;i<n;i++) {
            int cnt = totalLeaf;
            if(inbound[i]==1) cnt--;
            for(int next:conn[i]) {
                if(inbound[next]==1) cnt--;
            }
            minCnt = min(minCnt, cnt);
        }
        cout << minCnt << '\n';
    }
}
