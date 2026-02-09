#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t-->0) {
        int n; cin >> n;

        int max1=0, max2=0;
        int arr[n];
        for(int i=0;i<n;i++) {
            cin >> arr[i];
            if(max1<arr[i]) {
                max2=max1;
                max1=arr[i];
            } else if(max2<arr[i]) {
                max2=arr[i];
            }
        }

        for(int i=0;i<n;i++) {
            if(arr[i]==max1) cout << arr[i]-max2 << ' ';
            else cout << arr[i]-max1 << ' ';
        }
        cout << '\n';
    }
}