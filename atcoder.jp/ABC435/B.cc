#include<bits/stdc++.h>
using namespace std;

int a[51], preSum[51];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        preSum[i] += preSum[i-1]+a[i];
    }

    int cnt=0;
    for(int i=1;i<=n;i++) {
        for(int j=i+1;j<=n;j++) {
            bool chk=true;
            for(int k=i;k<=j;k++) {
                if((preSum[j]-preSum[i-1])%a[k]==0) chk=false;
            }
            cnt += chk;
        }
    }
    cout << cnt;
}