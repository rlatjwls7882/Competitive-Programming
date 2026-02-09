#include<bits/stdc++.h>
using namespace std;

int l[200000], r[200000];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;

        long long res=0;
        priority_queue<int> pq;
        for(int i=0;i<n;i++) cin >> l[i];
        for(int i=0;i<n;i++) cin >> r[i];
        for(int i=0;i<n;i++) {
            res += max(l[i], r[i]);
            pq.push(min(l[i], r[i]));
        }

        while(k-->1) {
            res += pq.top(); pq.pop();
        }
        cout << res+1 << '\n';
    }
}