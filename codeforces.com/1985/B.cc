#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int max=0, idx=0;
        for(int i=2;i<=n;i++) {
            int cnt = n/i;
            int sum = cnt*(cnt+1)/2*i;
            if(sum>max) {
                max=sum;
                idx=i;
            }
        }
        cout << idx << '\n';
    }
}