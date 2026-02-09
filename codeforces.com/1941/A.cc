#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m, k; cin >> n >> m >> k;
        int b[n];
        for(int i=0;i<n;i++) {
            cin >> b[i];
        }

        int c[m];
        for(int i=0;i<m;i++) {
            cin >> c[i];
        }

        int cnt=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(b[i]+c[j]<=k) {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}