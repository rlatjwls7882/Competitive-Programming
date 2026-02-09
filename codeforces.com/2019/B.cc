#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, q; cin >> n >> q;
        int x[n];
        for(int i=0;i<n;i++) cin >> x[i];

        map<long long, long long> cntAtPoints;
        for(long long i=0;i<n;i++) {
            if(i>0) cntAtPoints[i*(n-i)]+=x[i]-x[i-1]-1;
            cntAtPoints[(i+1)*(n-i)-1]++;
        }

        while(q-->0) {
            long long k; cin >> k;
            cout << cntAtPoints[k] << ' ';
        }
        cout << '\n';
    }
}