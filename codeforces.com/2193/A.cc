#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t ; cin >> t;
    while(t--) {
        int n, s, x; cin >> n >> s >> x;
        
        ll sum=0;
        while(n--) {
            int a; cin >> a;
            sum+=a;
        }
        cout << (s>=sum && (s-sum)%x==0 ? "YES\n":"NO\n");
    }
}