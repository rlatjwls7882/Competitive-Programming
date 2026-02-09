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
        int n; cin >> n;
        vector<ll> v, pre(n+1);
        while(n--) {
            int cur; cin >> cur;
            if(cur>1) {
                if(cur>2) pre[v.size()]++;
                v.push_back(cur);
                pre[v.size()] = pre[v.size()-1];
            }
        }

        ll total=0;
        for(int i=0;i<v.size();i++) {
            if(v[i]>2) total += v.size()-i-1;
            else total += pre[v.size()]-pre[i];
        }
        cout << total << '\n';
    }
}