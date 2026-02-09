#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

ll comb[32][32];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    for(int i=0;i<32;i++) comb[i][0]=comb[0][i]=1;
    for(int i=1;i<32;i++) {
        for(int j=1;j<=i;j++) {
            comb[i][j] = comb[i][j-1]*(i-j+1)/j;
        }
    }
    // for(int i=1;i<32;i++) {
    //     for(int j=0;j<=i;j++) {
    //         cout << comb[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;

        int len=0;
        while(n) {
            len++;
            n/=2;
        }

        ll cnt=0;
        for(int i=1;i<len;i++) {
            for(int j=0;j<i;j++) {
                if(i+j>k) {
                    // cout << i << ' ' << j << ' ' << comb[i-1][j] << '\n';
                    cnt+=comb[i-1][j];
                }
            }
        }
        if(len>k) cnt++;
        cout << cnt << '\n';
    }
}