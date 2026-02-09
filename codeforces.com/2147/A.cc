#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int x, y; cin >> x >> y;
        if(x<y) cout << "2\n";
        else if(y>1 && x-1>y) cout << "3\n";
        else cout << "-1\n";
    }
}
