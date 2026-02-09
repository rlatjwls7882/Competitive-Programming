#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int last; cin >> last;
        int maxDiff=0;
        while(n-->1) {
            int cur; cin >> cur;
            if(last>cur) maxDiff = max(maxDiff, last);
            last=cur;
        }
        cout << maxDiff << '\n';
    }
}