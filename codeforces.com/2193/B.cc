#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);

int p[200'000], idx[200'001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) {
            cin >> p[i];
            idx[p[i]]=i;
        }

        for(int i=0;i<n;i++) {
            if(idx[n-i]!=i) {
                reverse(p+i, p+idx[n-i]+1);
                break;
            }
        }
        for(int i=0;i<n;i++) cout << p[i] << ' ';
        cout << '\n';
    }
}