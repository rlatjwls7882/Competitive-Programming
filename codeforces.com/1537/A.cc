#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int sum=0;
        for(int i=0;i<n;i++) {
            int tmp; cin >> tmp;
            sum += tmp;
        }

        if(sum>=n) {
            cout << sum-n << '\n';
        } else {
            cout << 1 << '\n';
        }
    }
}