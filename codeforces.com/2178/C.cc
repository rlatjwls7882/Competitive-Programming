#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 200'001;

ll a[MAX], dp[MAX], pSum[MAX];

struct element {
    ll a, b;
    double x=0;
};

double meetX(element a, element b) {
    return (double)(a.b-b.b)/(b.a-a.a);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        ll sum=0;
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            sum+=a[i];
            if(i>1) pSum[i] = pSum[i-1]+max(a[i], 0LL);
        }

        ll res=a[1]-sum;
        for(int i=2;i<=n;i++) {
            res = max(res, 2*a[1]+2*pSum[i-1]+a[i]-sum);
        }
        cout << res << '\n';
    }
}