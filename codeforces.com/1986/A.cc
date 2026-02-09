#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int a, b, c; cin >> a >> b >> c;

        int minSum = INT_MAX;
        for(int i=1;i<=10;i++) {
            minSum = min(minSum, abs(a-i)+abs(b-i)+abs(c-i));
        }
        cout << minSum << '\n';
    }
}