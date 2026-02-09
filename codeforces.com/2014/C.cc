#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        long long a[n];
        long long sum=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        if(n<=2) {
            cout << "-1\n";
            continue;
        }

        sort(a, a+n);
        cout << max(0LL, a[n/2]*2*n - sum + 1) << '\n';
    }
}