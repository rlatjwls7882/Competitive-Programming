#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll rev(ll x) {
    string s = to_string(x);

    ll ret=0;
    for(int i=s.length()-1;i>=0;i--) ret = ret*10 + s[i]-'0';
    return ret;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    ll x, y; cin >> x >> y;

    for(int i=0;i<8;i++) {
        ll tmp = rev(x+y);
        x = y;
        y = tmp;
    }
    cout << y;
}
