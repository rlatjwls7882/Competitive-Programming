#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        long long n, k; cin >> n >> k;
        if((n*(n+1)-(n-k)*(n-k+1))/2%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
}