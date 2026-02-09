#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int a, b, c; cin >> a >> b >> c;
        a += (c+1)/2;
        b += c/2;
        if(a>b) cout << "First\n";
        else cout << "Second\n";
    }
}