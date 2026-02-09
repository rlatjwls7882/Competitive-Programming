#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;

    int minR=INT_MAX, maxR=INT_MIN, minC=INT_MAX, maxC=INT_MIN;
    while(n--) {
        int r, c; cin >> r >> c;
        minR = min(minR, r);
        maxR = max(maxR, r);
        minC = min(minC, c);
        maxC = max(maxC, c);
    }
    cout << max((maxR-minR+1)/2, (maxC-minC+1)/2);
}