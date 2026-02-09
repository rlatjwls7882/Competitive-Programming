#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(); cin.tie(); cout.tie();
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        ll sum=0;
        while(n-->0) {
            ll a; cin >> a;
            sum += a;
        }
        if(sqrt(sum)==(ll)sqrt(sum)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}