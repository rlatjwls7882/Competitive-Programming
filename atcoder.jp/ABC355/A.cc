#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    if(a==b) {
        cout << -1;
    } else if(a==1&&b==2 || a==2&&b==1) {
        cout << 3;
    } else if(a==1&&b==3 || a==3&&b==1) {
        cout << 2;
    } else {
        cout << 1;
    }
}