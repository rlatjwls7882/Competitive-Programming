#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int sum1=0, sum2=0;
        int max1=0, max2=0;
        for(int i=0;i<n;i++) {
            int a; cin >> a;
            if(i%2==0) {
                sum1++;
                max1 = max(max1, a);
            } else {
                sum2++;
                max2 = max(max2, a);
            }
        }
        cout << max(sum1+max1, sum2+max2) << '\n';
    }
}