#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);\
    long long n, x; cin >> n >> x;

    int cnt=0;
    while(n-->0) {
        char a; long long d; cin >> a >> d;
        if(a=='+') {
            x += d;
        } else {
            if(d>x) cnt++;
            else x -= d;
        }
    }
    cout << x << " " << cnt;
}