#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        double x, y, k; cin >> x >> y >> k;
        if(ceil(x/k)>ceil(y/k)) cout << (long long)(max(ceil(x/k), ceil(y/k))*2)-1 << '\n';
        else cout << (long long)(max(ceil(x/k), ceil(y/k))*2) << '\n';
    }
}