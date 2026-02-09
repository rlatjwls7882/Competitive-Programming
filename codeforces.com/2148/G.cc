#include<bits/stdc++.h>
using namespace std;

int cnt[200'001];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int gcdVal, maxCnt=0, maxFind=n;
        memset(cnt, 0, sizeof cnt);
        for(int i=0;i<n;i++) {
            int a; cin >> a;
            gcdVal = i==0 ? a : gcd(gcdVal, a);

            for(int j=1;j*j<=a;j++) {
                if(a%j==0) {
                    cnt[j]++;
                    if(j!=a/j) cnt[a/j]++;
                    if(j>gcdVal) maxCnt = max(maxCnt, cnt[j]);
                    if(a/j>gcdVal) maxCnt = max(maxCnt, cnt[a/j]);
                }
            }
            while(maxFind>gcdVal) maxCnt = max(maxCnt, cnt[maxFind--]);
            cout << min(maxCnt, i) << ' ';
        }
        cout << '\n';
    }
}
