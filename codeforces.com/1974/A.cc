#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int x, y; cin >> x >> y;

        int cnt=0;
        while(x>0 || y>0) {
            int remain = 15 - 4*max(0, min(2, y));
            y -= 2;
            x -= remain;
            cnt++;
        }
        cout << cnt << '\n';
    }
}