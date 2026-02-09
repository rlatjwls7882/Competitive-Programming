#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m, q; cin >> n >> m >> q;
        int b[m];
        for(int i=0;i<m;i++) cin >> b[i];
        sort(b, b+m);

        while(q-->0) {
            int a; cin >> a;
            int left=-1, right=n+1;
            if(a>b[0]) left = max(left, b[0]);
            if(a>b[1]) left = max(left, b[1]);
            if(a<b[0]) right = min(right, b[0]);
            if(a<b[1]) right = min(right, b[1]);

            if(left==-1) cout << right-1 << '\n';
            else if(right==n+1) cout << n-left << '\n';
            else cout << (right-left)/2 << '\n';
        }
    }
}