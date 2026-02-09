#include<bits/stdc++.h>
using namespace std;

string s[1000];
int vis[1000][1000];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
vector<vector<pair<int, int>>> conn(26);

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> s[i];
        for(int j=0;j<m;j++) {
            if(s[i][j]>='a') conn[s[i][j]-'a'].push_back({i, j});
        }
    }

    memset(vis, -1, sizeof vis);
    vis[0][0]=0;
    queue<pair<int, int>> q; q.push({0, 0});
    while(!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for(int i=0;i<4;i++) {
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(nx<0 || nx>=n || ny<0 || ny>=m || s[nx][ny]=='#' || vis[nx][ny]!=-1) continue;
            vis[nx][ny]=vis[x][y]+1;
            q.push({nx, ny});
        }

        if(s[x][y]>='a') {
            for(auto [nx, ny]:conn[s[x][y]-'a']) {
                if(vis[nx][ny]==-1) {
                    vis[nx][ny]=vis[x][y]+1;
                    q.push({nx, ny});
                }
            }
            conn[s[x][y]-'a'].clear();
        }
    }
    cout << vis[n-1][m-1];
}