#include<bits/stdc++.h>
using namespace std;

int a[500'000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];

    int r=min(a[0], n);
    for(int i=1;i<r;i++) r = min(n, max(r, i+a[i]));
    cout << r;
}