#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MAX = 1e9;

struct pos {
    int x, y;
};

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        pos p1 = {MAX, -MAX}; // (-10억, 10억)에서 가장 가까운 좌표 (a, b)
        pos p2 = {-MAX, -MAX}; // (10억, 10억)에서 가장 가까운 좌표 (c, d)
        for(int i=0;i<n;i++) {
            pos p; cin >> p.x >> p.y;
            if(abs(-MAX-p1.x) + abs(MAX-p1.y) > abs(-MAX-p.x) + abs(MAX-p.y)) p1=p;
            if(abs(MAX-p2.x) + abs(MAX-p2.y) > abs(MAX-p.x) + abs(MAX-p.y)) p2=p;
        }

        // 20억+a-x + 20억-b+y = 왼쪽 위 거리 (dist1)
        long long dist1;
        for(int i=0;i<2;i++) {
            cout << "? L " << MAX << '\n' << flush;
            cin >> dist1;
        }
        for(int i=0;i<2;i++) {
            cout << "? U " << MAX << '\n' << flush;
            cin >> dist1;
        }

        // 20억-c+x + 20억-d+y = 오른쪽 위 거리 (dist2)
        long long dist2;
        for(int i=0;i<4;i++) {
            cout << "? R " << MAX << '\n' << flush;
            cin >> dist2;
        }

        // x-y = 40억 + a - b - dist1
        // -x-y = 40억 - c - d - dist2
        cout << "! " << (p1.x-p1.y-dist1+p2.x+p2.y+dist2)/2 << ' ' << (8*MAX+p1.x-p1.y-dist1-p2.x-p2.y-dist2)/(-2) << '\n' << flush;
    }
}
