#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        long long n, k; cin >> n >> k;
        long long minDiff=LONG_LONG_MAX;
        long long left=k, right=k+n-1;
        while(left<=right) {
            long long mid = (left+right)/2;
            long long nextDiff = mid*(mid+1)-(k-1)*k/2-(k+n-1)*(k+n)/2;
            if(nextDiff>0) right=mid-1;
            else left=mid+1;
            minDiff = min(minDiff, abs(nextDiff));
        }
        cout << minDiff << '\n';
    }
}