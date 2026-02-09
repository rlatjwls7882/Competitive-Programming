#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; string a, b; cin >> n >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << (a==b ? "YES\n" : "NO\n");
    }
}