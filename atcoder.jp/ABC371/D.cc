#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x[n], p[n];
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) cin >> p[i];

    vector<pair<int, int>> v; v.push_back({-1000000000, 0});
    for(int i=0;i<n;i++) v.push_back({x[i], p[i]});
    sort(v.begin(), v.end());

    long long preSum[n+1] = {0, };
    for(int i=1;i<=n;i++) {
        preSum[i]=preSum[i-1]+v[i].second;
    }

    int q; cin >> q;
    while(q-->0) {
        int l, r; cin >> l >> r;

        int left=0, right=n;
        while(left<right) {
            int mid = (left+right+1)/2;
            if(v[mid].first>=l) right=mid-1;
            else left=mid;
        }
        int leftX=left;

        left=0; right=n;
        while(left<right) {
            int mid = (left+right+1)/2;
            if(v[mid].first<=r) left=mid;
            else right=mid-1;
        }
        cout << preSum[left] - preSum[leftX] << '\n';
    }
}