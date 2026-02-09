#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int w, h, n; cin >> w >> h >> n;
        int cnt=1;
        while(w%2==0 && w!=0) {
            w/=2;
            cnt*=2;
        }
        while(h%2==0 && h!=0) {
            h/=2;
            cnt*=2;
        }
        if(cnt>=n) cout << "YES\n";
        else cout << "NO\n";
    }
}   