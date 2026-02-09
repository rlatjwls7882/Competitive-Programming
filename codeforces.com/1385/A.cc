#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int x, y, z; cin >> x >> y >> z;
        if(x==y && x>=z) {
            cout << "YES\n" << x << ' ' << z << ' ' << z << '\n';
        } else if(x==z && x>=y) {
            cout << "YES\n" << y << ' ' << x << ' ' << y << '\n';
        } else if(y==z && y>=x) {
            cout << "YES\n" << x << ' ' << x << ' ' << y << '\n';
        } else {
            cout << "NO\n";
        }
    }
}