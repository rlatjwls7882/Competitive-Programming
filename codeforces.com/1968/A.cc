#include<bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    while(n-->0) {
        int x; cin >> x;
        int maxVal=0, _max=0;
        for(int i=x-1;i>=1;i--) {
            int val = gcd(x, i);
            if(x+i>_max) {
                _max=x+i;
                maxVal=i;
            }
        }
        cout << maxVal << '\n';
    }
}