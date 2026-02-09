#include<bits/stdc++.h>
using namespace std;

int a[200'001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        int sum=0;
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            if(i>1) sum += abs(a[i]-a[i-1]);
        }

        int res = sum-max(abs(a[1]-a[2]), abs(a[n-1]-a[n]));
        for(int i=2;i<n;i++) {
            res = min(res, sum-abs(a[i+1]-a[i])-abs(a[i-1]-a[i])+abs(a[i+1]-a[i-1]));
        }
        cout << res << '\n';
    }
}