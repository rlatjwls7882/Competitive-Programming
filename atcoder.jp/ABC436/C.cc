#include<bits/stdc++.h>
using namespace std;

set<pair<int, int>> s;

bool query(int r, int c) {
    if(s.count({r, c}) || s.count({r+1, c}) || s.count({r, c+1}) || s.count({r+1, c+1})) return false;
    s.insert({r, c});
    s.insert({r+1, c});
    s.insert({r, c+1});
    s.insert({r+1, c+1});
    return true;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;

    int cnt=0;
    while(m--) {
        int r, c; cin >> r >> c;
        cnt += query(r, c);
    }
    cout << cnt;
}