#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; string s; cin >> n >> s;

    int cnt=0, curX=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='x') {
            if(curX==2) cnt++;
            else curX++;
        } else {
            curX=0;
        }
    }
    cout << cnt;
}