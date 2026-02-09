#include<bits/stdc++.h>
using namespace std;

int a[200'000];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a, a+n);
        cout << max(a[0], a[1]-a[0]) << '\n';
    }
}