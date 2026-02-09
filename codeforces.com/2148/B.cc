#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, m, x, y; cin >> n >> m >> x >> y;
        int tmp;
        for(int i=0;i<n;i++) cin >> tmp;
        for(int i=0;i<m;i++) cin >> tmp;
        cout << n+m << '\n';
    }
}
