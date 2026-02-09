#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> conn(100'000);

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    if(s[0]=='f') {
        int t; cin >> t;
        while(t--) {
            int n, m; cin >> n >> m;
            conn = vector<vector<int>>(n);
            while(m--) {
                int u, v; cin >> u >> v;
                conn[u-1].push_back(v-1);
                conn[v-1].push_back(u-1);
            }

            vector<char> color(n);
            vector<bool> vis(n);
            queue<int> q; q.push(0);
            vis[0]=true;
            color[0]='r';
            while(!q.empty()) {
                int cur = q.front(); q.pop();
                for(int next:conn[cur]) {
                    if(!vis[next]) {
                        vis[next]=true;
                        if(color[cur]=='r') color[next]='g';
                        else if(color[cur]=='g') color[next]='b';
                        else color[next]='r';
                        q.push(next);
                    }
                }
            }
            for(char ch:color) cout << ch;
            cout << '\n';
        }
    } else {
        int t; cin >> t;
        while(t--) {
            int q; cin >> q;
            while(q--) {
                int n; cin >> n;
                string s; cin >> s;
                bool r=0, g=0, b=0;
                for(char ch:s) {
                    if(ch=='r') r=1;
                    else if(ch=='g') g=1;
                    else b=1;
                }
                if(!r && !g || !g && !b || !r && !b) {
                    cout << "1\n";
                } else {
                    for(int i=0;i<n;i++) {
                        if(s[i]=='r' && !g || s[i]=='g' && !b || s[i]=='b' && !r) {
                            cout << i+1 << '\n';
                            break;
                        }
                    }
                }
            }
        }
    }
}