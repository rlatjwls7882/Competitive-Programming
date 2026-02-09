#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0;i<n;i++) {
            if(i%2==0) cout << "-1 ";
            else if(i<n-1) cout << "3 ";
            else cout << "2 ";
        }
        cout << '\n';
    }
}
