#include<bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;

    while(t-->0) {
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }

        int first=0, last=n-1;
        while(first<=last) {
            if(first==last) {
                cout << a[first];
            } else {
                cout << a[first] << " " << a[last] << " ";
            }
            first++;
            last--;
        }
        cout << '\n';
    }
}