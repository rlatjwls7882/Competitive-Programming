#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n, d, k; cin >> n >> d >> k;
        int start[n+1] = {0, };
        int end[n+1] = {0, };
        while(k-->0) {
            int l, r; cin >> l >> r;
            start[l-1]++;
            end[r-1]++;
        }

        int cur=0;
        for(int i=0;i<d;i++) cur += start[i];

        int minCnt=cur, maxCnt=cur, brother=1, mother=1;
        for(int i=d;i<n;i++) {
            cur += start[i];
            cur -= end[i-d];
            if(cur<minCnt) {
                minCnt=cur;
                mother=i-d+2;
            }
            if(cur>maxCnt) {
                maxCnt=cur;
                brother=i-d+2;
            }
        }
        cout << brother << ' ' << mother << '\n';
    }
}