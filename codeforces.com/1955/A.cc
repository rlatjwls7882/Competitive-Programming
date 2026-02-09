#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, a, b; cin >> n >> a >> b;
        int cost=0;
        if(n>=2 && a*2>b) {
            int cnt = n/2;
            cost += cnt*b;
            n -= cnt*2;
        }
        cost += n*a;
        cout << cost << endl;
    }
}