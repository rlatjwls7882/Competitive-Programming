#include<bits/stdc++.h>
using namespace std;

int n, k;
int arr[200'000];

bool solve() {
    // 앞에 두덩이
    int cnt=0, low=0, high=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<=k) low++;
        else high++;
        if(low>0 && low>=high) {
            if(low>high && i+1<n && arr[i+1]>k) i++;
            cnt++;
            low=high=0;
        }
    }
    if(cnt>=2) return true;

    // 뒤에 두덩이
    cnt=low=high=0;
    for(int i=n-1;i>=0;i--) {
        if(arr[i]<=k) low++;
        else high++;
        if(low>0 && low>=high) {
            if(low>high && i-1>=0 && arr[i-1]>k) i--;
            cnt++;
            low=high=0;
        }
    }
    if(cnt>=2) return true;

    // 앞 뒤 한덩이씩
    cnt=low=high=0;
    int i=0;
    for(;i<n;i++) {
        if(arr[i]<=k) low++;
        else high++;
        if(low>0 && low>=high) {
            if(low>high && i+1<n && arr[i+1]>k) i++;
            cnt++;
            low=high=0;
            break;
        }
    }
    for(int j=n-1;j>i;j--) {
        if(arr[j]<=k) low++;
        else high++;
        if(low>0 && low>=high) {
            cnt++;
            break;
        }
    }
    if(cnt>=2) return true;

    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i=0;i<n;i++) cin >> arr[i];
        cout << (solve() ? "YES\n" : "NO\n");
    }
}