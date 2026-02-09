#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, k; cin >> n >> k;
        int cur=0, cnt=0;
        while(n-->0) {
            int a; cin >> a;
            if(a>=k) cur += a;
            else if(a==0 && cur) {
                cur--;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}