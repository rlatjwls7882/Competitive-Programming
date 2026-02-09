#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, h, l; cin >> n >> h >> l;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(), a.end());

        int cnt=0;
        if(h>l) swap(h, l);
        int le=0, ri=n-1;
        while(le<ri) {
            if(a[ri]>l) {
                ri--;
            } else if(a[le]>h) {
                break;
            } else {
                le++;
                ri--;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}