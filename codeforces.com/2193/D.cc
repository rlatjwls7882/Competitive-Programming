#include<bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("fma")
using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acosl(-1);

int a[300'001];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> make(n+1, INF);
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            make[a[i]]=1;
        }
        for(int i=1;i<=n;i++) {
            for(int j=2;j*j<=i;j++) {
                if(i%j==0 && make[j]!=INF && make[i/j]!=INF) {
                    make[i] = min(make[i], make[j]+make[i/j]);
                }
            }
            cout << (make[i]!=INF?make[i]:-1) << ' ';
        }
        cout << '\n';
    }
}