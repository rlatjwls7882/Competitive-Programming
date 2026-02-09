#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;

    int cnt=0;
    for(int a=0;a<=n && a<=m;a++) {
        for(int b=0;a*a+b<=n && a+b*b<=m;b++) {
            if(a*a+b==n && a+b*b==m) {
                cnt++;
            }
        }
    }
    cout << cnt;
}