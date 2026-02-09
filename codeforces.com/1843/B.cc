#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        long long sum=0, cnt=0, prev=1;
        while(n-->0) {
            long long cur; cin >> cur;
            if(prev>0 && cur<0) {
                cnt++;
            }
            sum += abs(cur);
            if(cur!=0) prev=cur;
        }
        cout << sum << ' ' << cnt << '\n';
    }
}