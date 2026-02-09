#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, k; cin >> n >> k;
        
        ll cnt=1;
        while(n-->0) {
            ll b; cin >> b;
            cnt*=b;
        }

        if(2023%cnt==0) {
            cout << "YES\n" << 2023/cnt;
            for(int i=0;i<k-1;i++) {
                cout << " 1";
            }
            cout << '\n';
        } else {
            cout << "NO\n";
        }
    }
}