#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[5000], b[5000], c[5000];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++) cin >> c[i];

        ll cnt1=0;
        for(int i=0;i<n;i++) {
            bool chk=true;
            for(int j=0;j<n;j++) {
                if(a[j]>=b[(i+j)%n]) chk=false;
            }
            cnt1+=chk;
        }

        ll cnt2=0;
        for(int i=0;i<n;i++) {
            bool chk=true;
            for(int j=0;j<n;j++) {
                if(b[j]>=c[(i+j)%n]) chk=false;
            }
            cnt2+=chk;
        }
        cout << n*cnt1*cnt2 << '\n';
    }
}