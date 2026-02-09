#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int cnt=0;
    while(true) {
        sort(a, a+n, greater<int>());
        if(a[1]==0) {
            cout << cnt;
            return 0;
        }
        cnt++;
        a[0]--;
        a[1]--;
    }
}