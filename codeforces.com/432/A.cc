#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;

    int cnt=0;
    while(n-->0) {
        int y; cin >> y;
        if(y+k<=5) cnt++;
    }
    cout << cnt/3;
}