#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(int i=n-k;i<n;i++) {
        cout << arr[i] << ' ';
    }
    for(int i=0;i<n-k;i++) {
        cout << arr[i] << ' ';
    }
}