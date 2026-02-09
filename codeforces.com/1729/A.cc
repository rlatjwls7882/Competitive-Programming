#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int a, b, c; cin >> a >> b >> c;
        int costa = a-1;
        int costb = abs(c-b)+(c-1);
        if(costa<costb) cout << "1\n";
        else if(costa>costb) cout << "2\n";
        else cout << "3\n";
    }
}