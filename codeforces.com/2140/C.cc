#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[200'001];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        ll sum=0;
        for(int i=1;i<=n;i++) {
            cin >> a[i];
            if(i%2==1) sum += a[i];
            else sum -= a[i];
        }

        ll plus=0;
        if(n>=2) plus = max((ll)(1-2*a[1]+2*a[2]), (ll)((n-1)/2*2));
        ll minOdd=a[1], maxEven=a[2], oddIdx=1, evenIdx=2;
        for(int i=3;i<=n;i++) {
            if(i%2==1) {
                plus = max(plus, i-evenIdx - 2*a[i] + 2*maxEven);
                if(2*minOdd+oddIdx > 2*a[i]+i) {
                    minOdd = a[i];
                    oddIdx = i;
                }
            } else {
                plus = max(plus, i-oddIdx - 2*minOdd + 2*a[i]);
                if(2*maxEven-evenIdx < 2*a[i]-i) {
                    maxEven = a[i];
                    evenIdx = i;
                }
            }
        }
        cout << sum+max(plus, 0LL) << '\n';
    }
}
