#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        long long sum=0, maxVal=0, cnt=0;
        for(int i=0;i<n;i++) {
            long long tmp; cin >> tmp;
            maxVal = max(maxVal, tmp);
            sum += tmp;
            if(sum==maxVal*2) cnt++;
        }
        cout << cnt << '\n';
    }
}