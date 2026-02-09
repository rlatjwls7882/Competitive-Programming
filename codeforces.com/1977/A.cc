#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, m; cin >> n >> m;
        if(n-m>=0 && (n-m)%2==0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}