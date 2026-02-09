#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);

        int _min=10000000;
        for(int i=1;i<n;i++) {
            _min = min(_min, arr[i]-arr[i-1]);
        }
        cout << _min << '\n';
    }
}