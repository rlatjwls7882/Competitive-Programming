#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;

    int cnt1=0, cnt2=0;
    while(n-->0) {
        int m, c; cin >> m >> c;
        if(m>c) cnt1++;
        else if(m<c) cnt2++;
    }

    if(cnt1>cnt2) cout << "Mishka";
    else if(cnt1<cnt2) cout << "Chris";
    else cout << "Friendship is magic!^^";
}