#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int cnt=n/3;
        if(n%3==2) {
            cnt++;
        } else if(n%3==1) {
            cnt+=2;
            if(n>3) cnt--;
        }
        cout << cnt << '\n';
    }
}