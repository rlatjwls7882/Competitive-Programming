#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        long long a[n];
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=0;i<n-2;i++) a[n-2]-=a[i];
        a[n-1] -= a[n-2];
        cout << a[n-1] << '\n';
    }
}