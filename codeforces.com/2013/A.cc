#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, x, y; cin >> n >> x >> y;
        cout << (n+min(x, y)-1)/min(x, y) << '\n';
    }
}