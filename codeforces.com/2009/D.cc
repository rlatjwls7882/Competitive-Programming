#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        bool chk0[n+1] = {false, }, chk1[n+1] = {false, };
        for(int i=0;i<n;i++) {
            int x, y; cin >> x >> y;
            if(y==0) chk0[x]=true;
            else chk1[x]=true;
        }

        long long total=0;
        for(int i=0;i<=n;i++) {
            if(chk0[i] && chk1[i]) total += n-2;
            if(i+2<=n && chk0[i] && chk0[i+2] && chk1[i+1]) total++;
            if(i+2<=n && chk1[i] && chk1[i+2] && chk0[i+1]) total++;
        }
        cout << total << '\n';
    }
}