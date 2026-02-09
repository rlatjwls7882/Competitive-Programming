#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;

        if(b%2==0) {
            if((a*(b/2)+2)%2==1) cout << "-1\n";
            else cout << a*(b/2)+2 << '\n';
        } else if(a%2==0 && b%2==1) {
            cout << "-1\n";
        } else {
            cout << a*b+1 << '\n';
        }
    }
}
