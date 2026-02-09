#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 998244353;

ll a[51], fact[1'000'001];

ll pow(ll n, ll k) {
    if(k==0) return 1;
    if(k==1) return n;

    ll tmp = pow(n, k/2);
    if(k%2) return tmp*tmp%MOD*n%MOD;
    return tmp*tmp%MOD;
}

ll comb(ll n, ll k) {
    return fact[n]*pow(fact[k]*fact[n-k]%MOD, MOD-2)%MOD;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    fact[0]=1;
    for(int i=1;i<=1000000;i++) {
        fact[i] = fact[i-1]*i%MOD;
    }

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<=n;i++) cin >> a[i];
        ll make=0, sum=a[0];
        for(int i=1;i<=n;i++) {
            sum += a[i];
            make = max(make, a[i]);
        }
        make = max(make, (sum+n-1)/n);
        make--;
        for(int i=1;i<=n;i++) {
            ll cur = max(make-a[i], 0LL);
            a[0]-=cur;
            a[i]+=cur;
        }
        sort(a+1, a+1+n);

        if(a[0]<0) {
            cout << "0\n";
        } else {
            ll cnt1=0, cnt2=0;
            for(int i=1;i<=n;i++) {
                if(a[i]==make) cnt1++;
                else cnt2++;
            }
            if(cnt1<=a[0]) {
                a[0]-=cnt1;
                cnt1+=cnt2;
                cnt2=0;
                a[0]%=n;
            }

            ll res1 = comb(cnt1, a[0]);
            cnt2+=a[0];
            cnt1-=a[0];
            cout << res1*fact[cnt1]%MOD*fact[cnt2]%MOD << '\n';
        }
    }
}