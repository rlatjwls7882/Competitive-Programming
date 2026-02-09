#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m; cin >> n >> m;
        if(n==1) cout << "0\n";
        else if(n==2) cout << m << '\n';
        else cout << 2*m << '\n';
    }
}