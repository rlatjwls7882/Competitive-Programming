#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        string a, b; cin >> a >> b;
        char tmp=a[0];
        a[0]=b[0];
        b[0]=tmp;
        cout << a << ' ' << b << '\n';
    }
}