#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 500'001;

int arr[MAX];

void update(int i, int v) {
    while(i<MAX) {
        arr[i]+=v;
        i+=i&-i;
    }
}

int query(int i) {
    int ret=0;
    while(i) {
        ret+=arr[i];
        i-=i&-i;
    }
    return ret;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;

    vector<pair<int, int>> v;
    for(int i=1;i<=n;i++) {
        int a; cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for(int i=1;i<=n;i++) update(i, 1);

    ll res=0;
    for(auto [a, idx]:v) {
        ll l=query(idx), r=query(n);
        r -= l-1;
        res += l*r;
        update(idx, -1);
    }
    cout << res;
}