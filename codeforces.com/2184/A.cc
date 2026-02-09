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
        if(n==2) cout << "2\n";
        else if(n==3) cout << "3\n";
        else cout << n%2 << '\n';
    }
}