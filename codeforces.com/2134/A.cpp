#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        if(n%2==1) {
            if((a%2==1 || a<b) && b%2==1) cout << "YES\n";
            else cout << "NO\n";
        } else {
            if((a%2==0 || a<b) && b%2==0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
