#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        if(a<b) swap(a, b);
        if(a==b) cout << "0\n";
        else if(a%b==0) cout << "1\n";
        else cout << "2\n";
    }
}