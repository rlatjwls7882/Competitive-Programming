#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> conn(200000);
bool visited[200000] = {false, };
bool v[200000] = {false, };

int dfs(int cur) {
    int cnt=0;
    visited[cur]=true;
    for(int next:conn[cur]) {
        if(!visited[next]) {
            cnt += dfs(next);
        }
    }
    if(v[cur] || !v[cur] && cnt) cnt++;
    return cnt;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    while(n-->1) {
        int a, b; cin >> a >> b;
        conn[a-1].push_back(b-1);
        conn[b-1].push_back(a-1);
    }

    int start;
    while(k-->0) {
        cin >> start;
        v[start-1]=true;
    }
    cout << dfs(start-1);
}